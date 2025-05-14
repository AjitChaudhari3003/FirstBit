create database ASS6;

use ASS6;

CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    salary DECIMAL(10,2),
    department_id INT,
    job_id VARCHAR(50),
    hire_date DATE
);

INSERT INTO employees (employee_id, first_name, last_name, salary, department_id, job_id, hire_date) VALUES
(1, 'John', 'Doe', 12000, 30, 'PROGRAMMER', '1987-05-23'),
(2, 'Jane', 'Smith', 14000, 100, 'SHIPPING_CLERK', '1988-06-15'),
(3, 'Mike', 'Brown', 8000, 30, 'PROGRAMMER', '1987-11-30'),
(4, 'Emily', 'Davis', 9500, 50, 'ACCOUNTANT', '1986-01-17'),
(5, 'Chris', 'Blake', 15000, 30, 'MANAGER', '1987-02-25'),
(6, 'Robert', 'King', 4500, 100, 'SHIPPING_CLERK', '1987-08-10'),
(7, 'David', 'Scott', 10000, 60, 'HR', '1985-04-05'),
(8, 'Alice', 'Ford', 11000, 70, 'ANALYST', '1989-12-01'),
(9, 'Brian', 'Clark', 11500, 30, 'PROGRAMMER', '1987-09-20'),
(10, 'Catherine', 'Bishop', 10500, 100, 'HR', '1987-12-15');


-- 1. Write a query to display the names (first_name, last_name) using alias 
-- name “First Name", "Last Name.
select first_name as 'First Name' , last_name as 'Last Name'
from employees;
-- 2. Write a query to get unique department ID from employee table. 
select distinct department_id from employees;

-- 3. Write a query to get all employee details from the employee table order 
-- by first name, descending 
select first_name from employees
order by first_name desc;

-- 4. Write a query to get the names (first_name, last_name), salary, PF of all 
-- the employees (PF is calculated as 15% of salary). 
select first_name, last_name,salary, salary*0.015 as PF from employees;

-- 5. Write a query to get the employee ID, names (first_name, last_name), 
-- salary in ascending order of salary. 
select employee_id, first_name, last_name,salary
from employees
order by salary asc;

-- 6. Write a query to get the total salaries payable to employees. 
select sum(salary) from employees;

-- 7. Write a query to get the maximum and minimum salary from employees 
-- table. 
select max(salary),min(salary) from employees;

-- 8. Write a query to get the average salary and number of employees in the 
-- employees table.
select avg(salary) as ASS , count(*) as NOE from employees;
 
-- 9. Write a query to get the number of employees working with the 
-- company. 
select count(employee_id) AS TOTAL_NO_EMP from employees;

-- 10. Write a query to get the number of jobs available in the employees table 
select count(distinct department_id) from employees;

-- 11. Write a query to select first 10 records from a table. 
select * from employees limit 10;

-- 12. Write a query to display the name (first_name, last_name) and salary for 
-- all employees whose salary is not in the range $10,000 through $15,000 
select first_name, last_name, salary from employees
where salary not  between 10000 and 15000;

-- 13. Write a query to display the name (first_name, last_name) and 
-- department ID of all employees in departments 30 or 100 in ascending  order.
select  first_name, last_name, department_id from employees 
where  department_id in (30 , 100)
order by department_id asc;
 
-- 14. Write a query to display the name (first_name, last_name) and salary for 
-- all employees whose salary is not in the range $10,000 through $15,000 
-- and are in department 30 or 100. 
select  first_name, last_name, department_id ,salary from employees 
where  department_id in (30 , 100) &&  salary not  between 10000 and 15000;


-- 15. Write a query to display the name (first_name, last_name) and hire date 
-- for all employees who were hired in 1987.
select first_name, last_name, hire_date 
from employees 
where year(hire_date)=1987;

-- 16. Write a query to display the first_name of all employees who have both 
-- "b" and "c" in their first name 
select first_name from employees 
where first_name like '%a%' and first_name like '%c%';

-- 17. Write a query to display the last name, job, and salary for all employees 
-- whose job is that of a Programmer or a Shipping Clerk, and whose salary 
-- is not equal to $4,500, $10,000, or $15,000. 
select last_name, job_id,salary 
from employees
where job_id='PROGRAMMER' || job_id='SHIPPING_CLEARK' and
 salary not in(4500,10000,15000);

-- 18. Write a query to display the last name of employees whose names have 
-- exactly 6 characters.
select last_name from employees where length(last_name)=4;
 
-- 19. Write a query to display the last name of employees having 'e' as the third 
-- character. 
select last_name from employees 
where substring(last_name,3,1)='e';

-- 20. Write a query to display the jobs/designations available in the employees 
-- table. 
select distinct job_id from employees;

-- 21. Write a query to select all record from employees where last name in 
-- 'BLAKE', 'SCOTT', 'KING' and 'FORD
select * from employees where last_name in('BLAKE', 'SCOTT', 'KING', 'FORD');

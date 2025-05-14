use firstbit;

CREATE TABLE emp (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(50),
    dept_id INT,
    salary DECIMAL(10, 2)
);

INSERT INTO emp (id, name, city, dept_id, salary) VALUES (101, 'Ajit', 'Pune', 1, 50000.00);
INSERT INTO emp (id, name, city, dept_id, salary) VALUES (102, 'Raj', 'Mumbai', 2, 61133.00);
INSERT INTO emp (id, name, city, dept_id, salary) VALUES (103, 'Aniket', 'Nashik', 1, 16446.00);
INSERT INTO emp (id, name, city, dept_id, salary) VALUES (104, 'Sneha', 'Pune', 3, 72000.00);
INSERT INTO emp (id, name, city, dept_id, salary) VALUES (105, 'Pooja', 'Nagpur', 2, 48000.00);

CREATE TABLE department (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50),
    dept_location VARCHAR(50)
);

INSERT INTO department (dept_id, dept_name, dept_location) VALUES (1, 'IT', 'Pune');
INSERT INTO department (dept_id, dept_name, dept_location) VALUES (2, 'HR', 'Mumbai');
INSERT INTO department (dept_id, dept_name, dept_location) VALUES (3, 'Sales', 'Nagpur');
INSERT INTO department (dept_id, dept_name, dept_location) VALUES (4, 'Finance', 'Nashik');




select * from department;

select * from emp
where salary>(select avg(salary) from emp);

select avg(salary) from emp where dept_id=(select dept_id from department where dept_name="HR");

SELECT dept_name 
FROM department 
WHERE dept_id NOT IN (SELECT dept_id FROM emp);
 
 
 select * from emp where dept_id =(select dept_id from department where dept_name="HR")
 order by  id desc 
 limit 3 ;
 
-- details of emp who earn above avg salary from hr dept
 select * from emp where 
 dept_id=(select dept_id from department where dept_name="HR")
 and
 salary>(select avg(salary) from emp where dept_id=(select dept_id from department where dept_name="HR"));
 
 
 -- name of emp and their salary with their dept name those who are working at pune location 
SELECT e.name, e.salary, d.dept_name
from emp e
inner join department d on e.dept_id = d.dept_id
where d.dept_location = 'Pune';

 
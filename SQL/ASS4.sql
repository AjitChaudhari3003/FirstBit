create database EMP;
use EMP;


CREATE TABLE Employees (
    EMPLOYEE_ID      INT PRIMARY KEY,
    FIRST_NAME       VARCHAR(50),
    LAST_NAME        VARCHAR(50),
    EMAIL            VARCHAR(50) UNIQUE,
    PHONE_NUMBER     VARCHAR(20),
    HIRE_DATE        DATE,
    JOB_ID           VARCHAR(20),
    SALARY           DECIMAL(10, 2),
    COMMISSION_PCT   DECIMAL(5, 2),
    MANAGER_ID       INT,
    DEPARTMENT_ID    INT
);


INSERT INTO Employees (
    EMPLOYEE_ID, FIRST_NAME, LAST_NAME, EMAIL, PHONE_NUMBER,
    HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT, MANAGER_ID, DEPARTMENT_ID
) VALUES
(100, 'Steven', 'King', 'SKING', '515.123.4567', '1987-06-17', 'AD_PRES', 24000.00, 0.00, 10, 200),
(101, 'Neena', 'Kochhar', 'NKOCHHAR', '515.123.4568', '1987-06-18', 'AD_VP', 17000.00, 0.00, 10, 200),
(102, 'Lex', 'De Haan', 'LDEHAAN', '515.123.4569', '1987-06-19', 'AD_VP', 17000.00, 0.00, 200, 10),
(103, 'Alexander', 'Hunold', 'AHUNOLD', '590.423.4567', '1987-06-20', 'IT_PROG', 9000.00, 0.00, 103, 60),
(104, 'Bruce', 'Ernst', 'BERNST', '590.423.4568', '1987-06-21', 'IT_PROG', 6000.00, 0.00, 103, 60),
(105, 'David', 'Austin', 'DAUSTIN', '590.423.4569', '1987-06-22', 'IT_PROG', 4800.00, 0.00, 103, 60),
(106, 'Valli', 'Pataballa', 'VPATABAL', '590.423.4560', '1987-06-23', 'IT_PROG', 4800.00, 0.00, 103, 60),
(107, 'Diana', 'Lorentz', 'DLORENTZ', '590.423.5567', '1987-06-24', 'IT_PROG', 4200.00, 0.00, 114, 30),
(108, 'Nancy', 'Greenberg', 'NGREENBE', '515.124.4569', '1987-06-25', 'SA_MAN', 12000.00, 0.00, 145, 80),
(109, 'Daniel', 'Faviet', 'DFAVIET', '515.124.4169', '1987-06-26', 'SA_MAN', 9000.00, 0.00, 145, 80);


CREATE TABLE Department (
    DEPARTMENT_ID   INT PRIMARY KEY,
    DEPARTMENT_NAME VARCHAR(50),
    MANAGER_ID      INT,
    LOCATION_ID     INT
);



CREATE TABLE Jobs (
    JOB_ID      VARCHAR(20) PRIMARY KEY,
    JOB_TITLE   VARCHAR(50),
    MIN_SALARY  INT,
    MAX_SALARY  INT
);


INSERT INTO Department (DEPARTMENT_ID, DEPARTMENT_NAME, MANAGER_ID, LOCATION_ID)
VALUES 
(10, 'Administration', 200, 1700),
(20, 'Marketing', 201, 1800),
(30, 'Purchasing', 114, 1700);


INSERT INTO Jobs (JOB_ID, JOB_TITLE, MIN_SALARY, MAX_SALARY)
VALUES ('IT_PROG', 'Programmer', 4000, 10000);

-- 4. Write SQL statement to increment salary of each emp by 10%.
UPDATE Employees
SET SALARY = SALARY * 1.10
WHERE EMPLOYEE_ID >=0;

-- 5. Write a SQL statement to change the email column of employees table with 'not 
-- available' for those employees whose department_id is 80 and gets a 
-- commission is less than .20% 
update Employees 
set EMAIL ="not available"
where  DEPARTMENT_ID = 80 and  COMMISSION_PCT<0.20;


-- 6. Write a SQL statement to change the email column of employees table with 'not 
-- available' for those employees who belongs to the 'Purchasing' department.
update Employees e
join Department d on e.DEPARTMENT_ID=d.DEPARTMENT_ID
set e.Email="not avialbel"
where d.DEPARTMENT_NAME="Purchasing";
 
-- 7. Write a SQL statement to change the email and commission_pct column of 
-- employees table with 'not available' and 0.10 for all employees.

UPDATE Employees
SET Email = 'not available', COMMISSION_PCT = 0.10;











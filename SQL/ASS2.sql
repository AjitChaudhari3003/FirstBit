-- 1. Login to MySQL and view all databases already present. You should get
-- following result :
show databases;
use firstbit;

-- Write an SQL statement to create a simple table countries including columns
-- country_id,country_name and region_id. After this display the structure of
-- table as below :

create table countries(
country_id int primary key,
country_name varchar(20),
region_id int
);
describe countries;

-- 3. Write an SQL statement to create a table named jobs including columns
-- job_id, job_title, min_salary, max_salary and check whether the
-- max_salary amount exceeding the upper limit 25000. Also set job_id as
-- primary key and entering null values for job_title is not allowed.

create table jobs(
 job_id int primary key,
 job_title varchar(20) not null,
 min_salary decimal,
 max_salary decimal,
 check(max_salary <=25000)
);


-- 4. Write a SQL statement to create a table named job_histry including columns
-- employee_id, start_date, end_date, job_id and department_id
create table job_histry(
employee_id int, 
start_date date, 
end_date date, 
job_id  int,
 department_id int
);


-- 5. Write an SQL statement to alter a table named countries to make sure that no
-- duplicate data against column country_id will be allowed at the time of insertion.
alter table countries
add constraint unique_country_id unique (country_id);


-- 6. Write an SQL statement to create a table named jobs including columns job_id,
-- job_title, min_salary and max_salary, and make sure that, the default value
-- for job_title is blank and min_salary is 8000 and max_salary is NULL will be
-- entered automatically at the time of insertion if no value assigned for the
-- specified columns.

create  table  job(
 job_id int primary key,
 job_title varchar(20) default"",
 min_salary decimal default 8000,
 max_salary decimal default null
);

-- 7. Create a Department table with following structure 

Create  table Depart(
dept_id decimal(4,0)  default 0,
dept_name varchar(30),
manager_id decimal(6,0)  default 0,
location_id decimal(4,0),
primary key(dept_id, manager_id)
);
describe Depart;


-- 8. Write an SQL statement to create a table employees including columns
-- employee_id, first_name, last_name, email, phone_number hire_date, job_id,
-- salary, commission, manager_id and department_id and make sure that, the
-- employee_id column does not contain any duplicate value at the time of
-- insertion and the foreign key columns combined by department_id and
-- manager_id columns contain only those unique combination values, which
-- combinations are exists in the departments table.

CREATE TABLE employe (
    employee_id DECIMAL(6,0) PRIMARY KEY, 
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    email VARCHAR(50),
    phone_number VARCHAR(20),  
    hire_date DATE,  
    job_id VARCHAR(50),
    salary DECIMAL(10,2),
    commission DECIMAL(10,2),
    manager_id DECIMAL(6,0),
    department_id DECIMAL(4,0),
    FOREIGN KEY (department_id, manager_id) 
        REFERENCES departments(department_id, manager_id) 
);

CREATE TABLE departments (
    department_id DECIMAL(4,0),
    manager_id DECIMAL(6,0),
    PRIMARY KEY (department_id, manager_id)
) ENGINE=InnoDB;



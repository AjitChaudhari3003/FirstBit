create database library;

use library;

-- Drop and recreate the table just in case
DROP TABLE IF EXISTS members;

CREATE TABLE members (
  Member_Id INT PRIMARY KEY,
  Member_Name VARCHAR(30),
  Member_address VARCHAR(50),
  Acc_Open_Date DATE,
  Membership_type VARCHAR(20),
  Fees_paid INTEGER,
  Max_Books_Allowed INTEGER,
  Penalty_Amount DECIMAL(7,2)
);

-- Now insert the record
INSERT INTO members 
VALUES (3, 'Amit Joshi', 'Mumbai', CURDATE(), 'Monthly', 500, 2, 10.00);


create table books(
Book_No Integer,
Book_Name VarChar(30),
Author_name Varchar(30),
Cost Decimal(7,2),
Category Char(10)
);

create table issue(
Lib_Issue_Id Integer,
Book_No Integer,
Member_Id Integer,
Issue_Date Date,
Return_date Date
);

-- 1) Create the table Member, Books and Issue without any constraints as
-- mentioned in the schema description above.

-- 2) View the structure of the tables.
describe members;
describe books;
describe issue;

-- 3) Drop the Member table
drop table members;

-- 4) Create the table Member again as per the schema description with the following constraints.
-- a. Member_Id – Primary Key
alter table members
add constraint pk_member_id primary key(Member_Id);
-- b. Membership_type - ‘Lifetime’,’ Annual’, ‘Half Yearly’,’ Quarterly’
ALTER TABLE members
ADD CONSTRAINT chk_membership_type 
CHECK (Membership_type IN ('Lifetime', 'Annual', 'Half Yearly', 'Quarterly'));
INSERT INTO members (Member_Id, Membership_type) VALUES (10, 'Lifetime');
select * from members;

-- 5) Modify the table Member increase the width of the member name to 30 characters.
alter table members
modify Member_Name varchar(50);

-- 6) Add a column named as Reference of Char(30) to Issue table.
alter table issue
add column Reference  Char(30) ;

-- 7) Delete/Drop the column Reference from Issue.
alter table issue 
drop column Reference;

-- 8) Rename the table Issue to Lib_Issue.
alter table issue
rename lib_issue;
describe lib_issue;

-- 9) Insert following data in table Member
-- 10) Insert at least 5 records with suitable data.
insert into members values(1,"Richa Sharma","Pune",'10-12-5',"Lifetime",25000,5,50);
insert into members values(2,"Garima sen","Pune",curdate(),"Annual",1000,3,null);
INSERT INTO members 
VALUES (3, 'Amit Joshi', 'Mumbai', CURDATE(), 'Monthly', 500, 2, 10);
INSERT INTO members 
VALUES (4, 'Neha Patil', 'Nashik', CURDATE(), 'Lifetime', 30000, 7, 25);
INSERT INTO members 
VALUES (5, 'Rohan Kulkarni', 'Nagpur', CURDATE(), 'Annual', 1500, 4, 0);
select * from members;

-- 11) Modify the column Member_name. Decrease the width of the member
-- name to 20 characters. (If it does not allow state the reason for that)
alter table members
modify Member_Name varchar(20);

-- 12) Try to insert a record with Max_Books_Allowed = 110, Observe the error that comes.
alter table members
modify Max_Books_Allowed int default 110;

-- 13) Generate another table named Member101 using a Create command
-- along with a simple SQL query on member table.
create table member101 as 
select * from member where 1=0;

-- 14) Add the constraints on columns max_books_allowed and penalty_amt
-- as follows
-- a. max_books_allowed < 100
-- b. penalty_amt maximum 1000
-- Also give names to the constraints.

alter table members 
add constraint chk_max_books_allowed
check (max_books_allowed<100);

alter table members 
add constraint chk_Penalty_Amount
check ( Penalty_Amount<=1000);

-- 15) Drop the table books.
drop table books;


-- 16) Create table Books again as per the schema description with the
-- following constraints.
-- a. Book_No – Primary Key
-- b. Book_Name – Not Null
-- c. Category – System, Fiction, Database, RDBMS, Others.

create table books(
Book_No varchar(30) Primary Key,
Book_Name varchar(30) not null,
Category varchar(30)
);

-- 17) Insert data in Book table as follows:
alter table books add column Cost int after Book_Name;
alter table books add column Auther varchar(20) after Book_Name;

-- 18) Insert more records in Book table.
insert into books values(101,"Let us C","Denis Ritchie",450,"System");
insert into books values(102,"Oracle complete refrence ","Loni",550,"Database");
insert into books values(103,"Mastering SQl","Loni",250,"Datbase");
insert into books values(104,"PL SQL ref","Scott Umran ",750,"Database");

-- 19) View the data in the tables using simple SQL query.
select * from books;
 
 -- 20) Insert into Book following data.
insert into books values(105,"National Geographic ","Adis scott ",1000,"Science");


-- 21) Rename the table Lib_Issue to Issue.
show tables;
alter table lib_issue
rename issue;

-- 22) Drop table Issue. 
Drop table issue;

-- 23) As per the given structure Create table Issue again with following constraints. 
--  Lib_Issue_Id-Primary key 
--  Book_No-  foreign key 
--  Member_id - foreign key 
--  Issue_date 
--  Return_date 

CREATE TABLE Issue (
  Lib_Issue_Id INT PRIMARY KEY,
  Book_No VARCHAR(30),
  Member_Id INT,
  Issue_date DATE,
  Return_date DATE,
  FOREIGN KEY (Book_No) REFERENCES books(Book_No),
  FOREIGN KEY (Member_Id) REFERENCES members(Member_Id)
);

-- 24)  Insert following data into Issue table. 
INSERT INTO Issue VALUES (7001, '101', 1, STR_TO_DATE('10-Dec-06', '%d-%b-%y'), NULL);
INSERT INTO Issue (Lib_Issue_Id, Book_No, Member_Id, Issue_date, Return_date) VALUES 
(7002, '102', 2, STR_TO_DATE('10-Dec-06', '%d-%b-%y'), STR_TO_DATE('25-Dec-06', '%d-%b-%y')),
(7003, '104', 1, STR_TO_DATE('25-Dec-06', '%d-%b-%y'), STR_TO_DATE('15-Jan-06', '%d-%b-%y')),
(7004, '101', 1, STR_TO_DATE('15-Jan-06', '%d-%b-%y'), STR_TO_DATE('04-Jul-06', '%d-%b-%y')),
(7005, '104', 2, STR_TO_DATE('04-Jul-06', '%d-%b-%y'), STR_TO_DATE('15-Nov-06', '%d-%b-%y')),
(7006, '101', 3, STR_TO_DATE('15-Nov-06', '%d-%b-%y'), STR_TO_DATE('18-Feb-06', '%d-%b-%y'));

-- 25) Remove the constraints on Issue table 

-- 26) Insert a record in Issue table. The member_id should not exist in  
-- member table. 
INSERT INTO Issue (Lib_Issue_Id, Book_No, Member_Id, Issue_date, Return_date)
VALUES (7007, '105', 999, STR_TO_DATE('01-Jan-07', '%d-%b-%y'), NULL);

-- 27) Now enable the constraints of Issue table. Observe the error 
-- 28) Delete the record inserted at Q-27) and enable the constraints. 
DELETE FROM Issue WHERE Lib_Issue_Id = 7007;

-- 29) Try to delete the record of member id 1 from member table and  
-- observe the error .
DELETE FROM members WHERE Member_Id = 1;
 
-- 30) View the data and structure of all the three tables Member,  
-- Issue, Book.
-- View data in the tables
SELECT * FROM members;
SELECT * FROM Issue;
SELECT * FROM books;

-- View structure of the tables
DESCRIBE members;
DESCRIBE Issue;
DESCRIBE books;
 
-- 31) Modify the Return_Date of 7004,7005 to 15 days after the    
-- Issue_date. 
UPDATE Issue 
SET Return_date = DATE_ADD(Issue_date, INTERVAL 15 DAY)
WHERE Lib_Issue_Id IN (7004, 7005);

-- 32) Remove all the records from Issue table where member_ID is 1  
-- and Issue date in before 10-Dec-06.
DELETE FROM Issue 
WHERE Member_Id = 1 AND Issue_date < STR_TO_DATE('10-Dec-06', '%d-%b-%y');
 
-- 33) Remove all the records from Book table with category other   
-- than RDBMS and Database.
DELETE FROM books 
WHERE Category NOT IN ('RDBMS', 'Database');
 
-- 34) Remove the table Member. 
DROP TABLE IF EXISTS members;

-- 35) Remove the table Book. 

DROP TABLE IF EXISTS books;





use firstbit;
SET SQL_SAFE_UPDATES = 0;

create table customer(id int primary key,
       cust_name varchar(20) not null,
       fav_dish varchar(20) ,
       visit_count int);
       
insert into customer values(1,"Shivam","Tea",2);
insert into customer values(2,"Rushi","Milk",6);
insert into customer values(3,"Ram","",2);
insert into customer values(4,"Shaam","Dabeli",2);


select * from customer; 
table customer;

update customer set visit_count=6 where cust_name="Rushi";

select * from customer where visit_count>3;

UPDATE customer SET fav_dish = 'SandWich' WHERE cust_name = 'Shivam';

select visit_count from customer where fav_dish="" ;
select cust_name from customer where visit_count>1 &&  fav_dish="Milk";

select * from customer where fav_dish="Dabeli" or  fav_dish="Milk";

select * from customer where fav_dish!="Dabeli" ;
select * from customer where fav_dish not in ("Dabeli","Milk");



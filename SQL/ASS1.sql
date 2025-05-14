CREATE database firstbit;
select * from firstbit.countires;
use firstbit;

create table superheros(heroId int primary key , 
  heroName  varchar(20) not null,
  superpower varchar(20) not null,
  secret_identity varchar(20),
  debut_year int );countries
              
show tables;desc superheros;

alter table superheros
add constraint check(debut_year>1900);

show create table superheros;


alter table superheros add column team varchar(20) default "solo" after superpower;

alter table superheros
drop column team ;
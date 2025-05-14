CREATE DATABASE IF NOT EXISTS coin_db;
USE coin_db;

CREATE TABLE coins (
    coin_id INT AUTO_INCREMENT PRIMARY KEY,
    country VARCHAR(50),
    denomination DOUBLE,
    year_of_minting INT,
    current_value DOUBLE,
    acquired_date VARCHAR(20)
);

INSERT INTO coins (country, denomination, year_of_minting, current_value, acquired_date) VALUES
('India', 1.0, 2001, 5.0, '2010-05-12'),
('USA', 0.25, 1999, 15.0, '2012-09-30'),
('UK', 2.0, 2005, 10.0, '2015-03-20'),
('Canada', 1.0, 1998, 8.0, '2011-11-05'),
('Germany', 0.5, 2002, 6.0, '2016-07-14'),
('Australia', 0.2, 2010, 4.5, '2019-01-10'),
('Japan', 100.0, 1987, 25.0, '2020-02-28'),
('France', 1.0, 1995, 7.0, '2017-06-18'),
('Italy', 0.5, 1990, 5.5, '2013-08-22'),
('India', 5.0, 2015, 6.0, '2021-12-01');

select * from coins;

truncate coins;
use firstbit;



CREATE TABLE users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    userid VARCHAR(50) NOT NULL,
    pass VARCHAR(50) NOT NULL
);


INSERT INTO users (userid, pass) VALUES 
('ajit', 'pune'),
('rahul', 'mumbai'),
('neha', 'nagpur');

table users;

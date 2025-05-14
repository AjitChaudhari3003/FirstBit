-- Create the database
CREATE DATABASE ajit;

-- Use the database
USE ajit;

-- Create a table (example: Users)
CREATE TABLE Users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    age INT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- Insert sample data
INSERT INTO Users (name, email, age) VALUES 
('Ajit Chaudhari', 'ajit@example.com', 22),
('Rahul Sharma', 'rahul@example.com', 24);

-- Retrieve data
SELECT * FROM Users;

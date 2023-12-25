CREATE DATABASE Academy_2;
GO;
USE Academy_2;


CREATE TABLE Groups (
    Id INT PRIMARY KEY IDENTITY (1,1),
    Name NVARCHAR(10) NOT NULL UNIQUE CHECK (LEN(Name) > 0),
    Rating INT NOT NULL CHECK (Rating >= 0 AND Rating <= 5),
    Year INT NOT NULL CHECK (Year >= 1 AND Year <= 5)
);

CREATE TABLE Departments (
    Id INT PRIMARY KEY IDENTITY (1,1),
    Financing MONEY NOT NULL DEFAULT 0 CHECK (Financing >= 0),
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);


CREATE TABLE Faculties (
    Id INT PRIMARY KEY IDENTITY (1,1),
    Dean NVARCHAR(MAX) NOT NULL CHECK (LEN(Dean) > 0),
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);

CREATE TABLE Teachers (
    Id INT PRIMARY KEY IDENTITY (1,1),
    EmploymentDate DATE NOT NULL CHECK (EmploymentDate >= '1990-01-01'),
    IsAssistant BIT NOT NULL DEFAULT 0,
    IsProfessor BIT NOT NULL DEFAULT 0,
    Name NVARCHAR(MAX) NOT NULL CHECK (LEN(Name) > 0),
    Position NVARCHAR(MAX) NOT NULL CHECK (LEN(Position) > 0),
    Premium MONEY NOT NULL DEFAULT 0 CHECK (Premium >= 0),
    Salary MONEY NOT NULL CHECK (Salary > 0),
    Surname NVARCHAR(MAX) NOT NULL CHECK (LEN(Surname) > 0)
);

INSERT INTO Departments (Financing, Name) VALUES (10000, N'Economy');
INSERT INTO Departments (Financing, Name) VALUES (15000, N'Physics');
INSERT INTO Departments (Financing, Name) VALUES (20000, N'Chemistry');
INSERT INTO Departments (Financing, Name) VALUES (8000, N'Biology');
INSERT INTO Departments (Financing, Name) VALUES (30000, N'Computer Science');


INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Rustam', 5, 3);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Eldar', 4, 3);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Ali', 3, 2);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Mariam', 2, 4);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Kamil', 4, 5);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Nadia', 3, 1);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Amina', 5, 4);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Arman', 1, 2);
INSERT INTO Groups(NAME, RATING, YEAR) VALUES (N'Bakyt', 2, 5);

INSERT INTO Teachers (EmploymentDate, IsAssistant, IsProfessor, Name, Position, Premium, Salary, Surname)
VALUES ('2000-05-15', 1, 0, N'John', N'Lecturer', 500, 1500, N'Doe');

INSERT INTO Teachers (EmploymentDate, IsAssistant, IsProfessor, Name, Position, Premium, Salary, Surname)
VALUES ('2010-10-20', 0, 1, N'Sarah', N'Professor', 1000, 2500, N'Smith');

INSERT INTO Teachers (EmploymentDate, IsAssistant, IsProfessor, Name, Position, Premium, Salary, Surname)
VALUES ('1995-03-08', 1, 0, N'Emily', N'Assistant Professor', 800, 2000, N'Johnson');

SELECT Id, Name, Financing
FROM Departments
ORDER BY Id DESC;

SELECT Name AS "Group Name", Rating AS "Group Rating"
FROM Groups;

SELECT Surname, (Premium * 100.0 / Salary) AS "Rate vs Premium", ((Salary + Premium) * 100.0 / Salary) AS "Rate vs Salary"
FROM Teachers;

SELECT 'The dean of faculty ' + Name + ' is ' + Dean AS Faculty_Info
FROM Faculties;

SELECT Surname
FROM Teachers
WHERE IsProfessor = 1 AND Salary > 1050;

SELECT Name
FROM Departments
WHERE Financing < 11000 OR Financing > 25000;

SELECT Name
FROM Faculties
WHERE Name <> 'Computer Science';

SELECT Surname, Position
FROM Teachers
WHERE IsProfessor = 0;

SELECT Surname, Position, Salary, Premium
FROM Teachers
WHERE IsAssistant = 1 AND Premium BETWEEN 160 AND 550;

SELECT Surname, Salary
FROM Teachers
WHERE IsAssistant = 1;

SELECT Surname, Position
FROM Teachers
WHERE EmploymentDate < '2000-01-01';

SELECT Name AS "Name of Department"
FROM Departments
WHERE Name < 'Software Development'
ORDER BY Name;

SELECT Surname
FROM Teachers
WHERE IsAssistant = 1 AND (Salary + Premium) <= 1200;

SELECT Name
FROM Groups
WHERE Year = 5 AND Rating BETWEEN 2 AND 4;

SELECT Surname
FROM Teachers
WHERE IsAssistant = 1 AND (Salary < 550 OR Premium < 200);


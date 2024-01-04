CREATE DATABASE Academy_21_12_2023
GO;
USE Academy_21_12_2023


CREATE TABLE Departments (
    Id INT PRIMARY KEY IDENTITY,
    Financing MONEY NOT NULL DEFAULT 0,
    Name NVARCHAR(100) NOT NULL UNIQUE,
    FacultyId INT NOT NULL,
    FOREIGN KEY (FacultyId) REFERENCES Faculties(Id)
);

CREATE TABLE Faculties (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Groups (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(10) NOT NULL UNIQUE,
    Year INT NOT NULL CHECK (Year BETWEEN 1 AND 5),
    DepartmentId INT NOT NULL,
    FOREIGN KEY (DepartmentId) REFERENCES Departments(Id)
);

CREATE TABLE GroupsLectures (
    Id INT PRIMARY KEY IDENTITY,
    GroupId INT NOT NULL,
    LectureId INT NOT NULL,
    FOREIGN KEY (GroupId) REFERENCES Groups(Id),
    FOREIGN KEY (LectureId) REFERENCES Lectures(Id)
);

CREATE TABLE Lectures (
    Id INT PRIMARY KEY IDENTITY,
    DayOfWeek INT NOT NULL CHECK (DayOfWeek BETWEEN 1 AND 7),
    LectureRoom NVARCHAR(MAX) NOT NULL,
    SubjectId INT NOT NULL,
    TeacherId INT NOT NULL,
    FOREIGN KEY (SubjectId) REFERENCES Subjects(Id),
    FOREIGN KEY (TeacherId) REFERENCES Teachers(Id)
);

CREATE TABLE Subjects (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Teachers (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(MAX) NOT NULL,
    Salary MONEY NOT NULL CHECK (Salary > 0),
    Surname NVARCHAR(MAX) NOT NULL
);

GO;

INSERT INTO Faculties (Name) VALUES
(N'Факультет архитектуры'),
(N'Факультет биологии'),
(N'Факультет химии'),
(N'Факультет географии'),
(N'Факультет математики');

INSERT INTO Departments (Financing, Name, FacultyId) VALUES
(150000, N'Кафедра архитектурного дизайна', 1),
(200000, N'Кафедра зоологии', 2),
(180000, N'Кафедра неорганической химии', 3),
(220000, N'Кафедра геоморфологии', 4),
(190000, N'Кафедра дискретной математики', 5);

INSERT INTO Groups (Name, Year, DepartmentId) VALUES
(N'Группа 101', 1, 1),
(N'Группа 201', 2, 2),
(N'Группа 301', 3, 3),
(N'Группа 401', 4, 4),
(N'Группа 501', 5, 5);

INSERT INTO Lectures (DayOfWeek, LectureRoom, SubjectId, TeacherId) VALUES
(1, N'Аудитория 1', 1, 1),
(2, N'Аудитория 2', 2, 2),
(3, N'Аудитория 3', 3, 3),
(4, N'Аудитория 4', 4, 4),
(5, N'Аудитория 5', 5, 5);

INSERT INTO Teachers (Name, Salary, Surname) VALUES
(N'Иван', 3000, N'Иванов'),
(N'Петр', 3200, N'Петров'),
(N'Сергей', 3500, N'Сергеев'),
(N'Ольга', 3100, N'Ольгова'),
(N'Наталья', 3300, N'Натальева');

INSERT INTO Subjects (Name) VALUES
(N'Архитектурный рисунок'),
(N'Зоология'),
(N'Неорганическая химия'),
(N'Геоморфология'),
(N'Дискретная математика');

INSERT INTO GroupsLectures (GroupId, LectureId) VALUES
(1, 1),
(2, 2),
(3, 3),
(4, 4),
(5, 5);


SELECT COUNT(DISTINCT Teachers.Id) AS TeachersCount
FROM Teachers
INNER JOIN Lectures L ON L.TeacherId = Teachers.Id
INNER JOIN GroupsLectures GL ON GL.LectureId = L.Id
INNER JOIN Groups G ON G.Id = GL.GroupId
INNER JOIN Departments D ON D.Id = G.DepartmentId
WHERE D.Name = N'Кафедра архитектурного дизайна';

SELECT COUNT(DISTINCT L.Id) AS LecturesCount
FROM Lectures L
INNER JOIN Teachers T on L.TeacherId = T.Id
WHERE T.Name = N'Иван' AND T.Surname = N'Иванов'

SELECT COUNT(*) AS TotalLectures
FROM Lectures
WHERE LectureRoom = N'Аудитория 1';

SELECT LectureRoom, COUNT(*) AS NumberOfLectures
FROM Lectures
GROUP BY LectureRoom;

-- 5 запрос некорректный

select AVG(T.Salary) as AverageRate
from Teachers T
INNER JOIN Lectures L ON T.Id = L.TeacherId
INNER JOIN Subjects S ON L.SubjectId = S.Id
WHERE S.Name = N'Архитектурный рисунок'

-- 7 запрос некорректный

SELECT AVG(D.Financing) AS AverageFinancing
FROM Departments D

SELECT t.Name AS Name, t.Surname AS Surname, COUNT(l.SubjectId) AS NumberOfSubjects
FROM Teachers t
JOIN Lectures l ON t.Id = l.TeacherId
GROUP BY t.Name, t.Surname;

SELECT DayOfWeek, COUNT(*) AS NumberOfLectures
FROM Lectures
GROUP BY DayOfWeek;

SELECT l.LectureRoom AS AuditoriumNumber, COUNT(DISTINCT d.Id) AS NumberOfDepartments
FROM Lectures l
INNER JOIN GroupsLectures gl ON l.Id = gl.LectureId
INNER JOIN Groups g ON gl.GroupId = g.Id
INNER JOIN Departments d ON g.DepartmentId = d.Id
GROUP BY l.LectureRoom;

SELECT f.Name AS FacultyName, COUNT(DISTINCT s.Id) AS NumberOfSubjects
FROM Faculties f
JOIN Departments d ON f.Id = d.FacultyId
JOIN Groups g ON d.Id = g.DepartmentId
JOIN GroupsLectures gl ON g.Id = gl.GroupId
JOIN Lectures l ON gl.LectureId = l.Id
JOIN Subjects s ON l.SubjectId = s.Id
GROUP BY f.Name;




CREATE TABLE Curators (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(MAX) NOT NULL,
    Surname NVARCHAR(MAX) NOT NULL
);

CREATE TABLE Departments (
    Id INT PRIMARY KEY IDENTITY,
    Financing MONEY NOT NULL DEFAULT 0,
    Name NVARCHAR(100) NOT NULL UNIQUE,
    FacultyId INT NOT NULL,
    FOREIGN KEY (FacultyId) REFERENCES Faculties(Id)
);

CREATE TABLE Faculties (
    Id INT PRIMARY KEY IDENTITY,
    Financing MONEY NOT NULL DEFAULT 0,
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Groups (
    Id INT PRIMARY KEY IDENTITY,
    Name NVARCHAR(10) NOT NULL UNIQUE,
    Year INT NOT NULL CHECK (Year BETWEEN 1 AND 5),
    DepartmentId INT NOT NULL,
    FOREIGN KEY (DepartmentId) REFERENCES Departments(Id)
);

CREATE TABLE GroupsCurators (
    Id INT PRIMARY KEY IDENTITY,
    CuratorId INT NOT NULL,
    GroupId INT NOT NULL,
    FOREIGN KEY (CuratorId) REFERENCES Curators(Id),
    FOREIGN KEY (GroupId) REFERENCES Groups(Id)
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


INSERT INTO Curators (Name, Surname)
VALUES (N'Иван', N'Иванов'),
       (N'Петр', N'Петров'),
       (N'Мария', N'Сидорова'),
       (N'Анна', N'Павлова'),
       (N'Сергей', N'Смирнов');


INSERT INTO Faculties (Financing, Name)
VALUES (50000, N'Факультет инженерии'),
       (75000, N'Факультет информационных технологий'),
       (60000, N'Факультет естественных наук'),
       (80000, N'Факультет гуманитарных наук'),
       (55000, N'Факультет медицины');


INSERT INTO Departments (Financing, Name, FacultyId)
VALUES (20000, N'Отделение математики', 1),
       (30000, N'Отделение информатики', 2),
       (25000, N'Отделение физики', 3),
       (35000, N'Отделение истории', 4),
       (18000, N'Отделение биологии', 5);


INSERT INTO Groups (Name, Year, DepartmentId)
VALUES (N'Группа 1', 2, 1),
       (N'Группа 2', 3, 2),
       (N'Группа 3', 1, 3),
       (N'Группа 4', 4, 4),
       (N'Группа 5', 5, 5);


INSERT INTO Teachers (Name, Salary, Surname)
VALUES (N'Алексей', 35000, N'Козлов'),
       (N'Елена', 40000, N'Смирнова'),
       (N'Дмитрий', 32000, N'Иванов'),
       (N'Ольга', 38000, N'Петрова'),
       (N'Игорь', 30000, N'Сидоров');


INSERT INTO Subjects (Name)
VALUES (N'Математика'),
       (N'Информатика'),
       (N'Физика'),
       (N'История'),
       (N'Биология');



INSERT INTO GroupsCurators (CuratorId, GroupId)
VALUES (1, 1),
       (2, 1),
       (3, 2),
       (4, 2);
       (5, 3);


INSERT INTO Lectures (LectureRoom, SubjectId, TeacherId)
VALUES (N'Аудитория 1', 1, 1),
       (N'Аудитория 2', 2, 2),
       (N'Аудитория 3', 3, 3),
       (N'Аудитория 4', 4, 4);
       (N'Аудитория 5', 5, 5);

INSERT INTO GroupsLectures (GroupId, LectureId)
VALUES (1, 1),
       (1, 2),
       (2, 3),
       (2, 4);
       (3, 5);

SELECT * FROM Teachers, Groups

SELECT F.Name
FROM Faculties F
INNER JOIN Departments D ON F.Id = D.FacultyId
WHERE  D.Financing > F.Financing;

SELECT DISTINCT C.Surname AS CuratorSurname, G.Name AS GroupName
FROM Curators C
INNER JOIN GroupsCurators GC ON  GC.CuratorId = C.Id
INNER JOIN Groups G ON GC.GroupId = G.Id

SELECT DISTINCT C.Surname AS CuratorsSurname, C.Name AS CuratorsName
FROM Curators C
INNER JOIN GroupsCurators GC on C.Id = GC.CuratorId
INNER JOIN Groups G ON GC.GroupId = G.Id
WHERE G.Name = N'Группа 1'

SELECT DISTINCT T.Surname AS TeacherSurname, T.Name AS TeacherName, F.Name as Faculty
FROM Teachers T
INNER JOIN LECTURES L ON T.ID = L.TeacherId
INNER JOIN Subjects S on L.SubjectId = S.Id
INNER JOIN Departments D ON S.Id = D.Id
INNER JOIN Faculties F ON D.FacultyId = F.Id;

SELECT DISTINCT G.Name AS [Group], D.Name AS Department
FROM Groups G
INNER JOIN Departments D on G.DepartmentId = D.Id

SELECT DISTINCT S.Name AS Subject, T.Name AS TeacherName, T.Surname AS TeacherSurname
FROM Subjects S
INNER JOIN Lectures L on S.Id = L.SubjectId
INNER JOIN Teachers T on L.TeacherId = T.Id
WHERE T.Name = N'Алексей' AND T.Surname = N'Козлов'

SELECT DISTINCT D.Name AS Department, F.Name AS Faculty
FROM Departments D
INNER JOIN Faculties F ON D.FacultyId = F.Id

-- Восьмое задание не корректно

SELECT DISTINCT G.Name AS [Group]
FROM Groups G
INNER JOIN Departments D on G.DepartmentId = D.Id
INNER JOIN Faculties F on D.FacultyId = F.Id
WHERE F.Name = N'Факультет информационных технологий'

SELECT DISTINCT G.Name AS [Group], F.Name AS Faculties
FROM Groups G
INNER JOIN Departments D on G.DepartmentId = D.Id
INNER JOIN Faculties F on D.FacultyId = F.Id
WHERE G.Year = 5

SELECT T.Name AS TeacherName, T.Surname AS TeacherSurname,
       S.Name AS SubjectName, G.Name AS GroupName
FROM Teachers T
INNER JOIN Lectures L ON T.Id = L.TeacherId
INNER JOIN Subjects S ON L.SubjectId = S.Id
INNER JOIN GroupsLectures GL ON L.Id = GL.LectureId
INNER JOIN Groups G ON GL.GroupId = G.Id
WHERE L.LectureRoom = N'Аудитория 1';

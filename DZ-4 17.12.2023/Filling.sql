insert into People ([Name], [Surname], [Age])
values
    (N'Kanan', N'Mammadli', 16),
    (N'Elnur', N'Mamedov', 19),
    (N'Muhammad', N'Mammadguseinov', 17),
    (N'Ziya', N'Gadzhily', 17),
    (N'Igor', N'Kostolomov', 24),
    (N'Rustam', N'Niftaliev', 26),
    (N'Javad', N'Rahimli', 19),
    (N'Ramil', N'Teymurov', 19),
    (N'Agasaf', N'Mammedov', 19),
    (N'Ali', N'Shirinov', 16),
    (N'Ali', N'Ismail', 17),
    (N'Atilla', N'Rustam', 17),
    (N'Rufat', N'Aliyev', 16);

insert into Students([GPA], [PersonId])
values
    (11, 1),
    (12, 2),
    (12, 3),
    (8, 4),
    (8, 5),
    (12, 6),
    (7, 7),
    (11, 8),
    (8, 9),
    (9, 10),
    (8, 11),
    (10, 12),
    (10, 13);

select P.Name, GPA from Students
inner join People P on P.Id = Students.PersonId

insert into Faculty ([Name])
values
    ('Information Technology'),
    (N'Computer Science'),
    (N'Digital Design'),
    (N'Cyber security');

select * from Faculty

insert into Groups ([Name], [Course], [FacultyId])
values
    (N'FBMS_3_22_8_ru', 3, 2),
    (N'FBMS_1221_RU', 5, 2),
    (N'FBAS_4217_RU', 4, 2),
    (N'FBAS_3_22_11_ru', 3, 2)

insert into GroupData (StudentId, GroupId)
values
    (1, 1),
    (2, 1),
    (3, 1),
    (4, 1),
    (5, 1),
    (6, 1),
    (7, 1),
    (8, 1),
    (9, 1),
    (10, 1),
    (11, 1),
    (12, 1),
    (13, 1)

insert into People ([Name], [Surname], [Age])
values (N'Elvin', N'Azimov', 22)

insert into Employee ([Salary], [Experience])
values (5000, 7)

insert into Teachers ([PersonId], [EmployeeId])
values (14, 1)

insert into StudyPlan ([TeacherId], [GroupId])
values
    (1, 1),
    (1, 2),
    (1, 3),
    (1, 4)
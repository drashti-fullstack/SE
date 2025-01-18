create table employees
(
employee_id int unique not null,
first_name varchar(25) not null,
last_name varchar (25) not null,
hire_date date,
salary int not null,
commission_pct float,
manager_id int,
department_id int not null
);
insert into employees values (100,'Steven','King','2024-12-10',25000,null,null,90);
insert into employees values (101,'Neena','Kochhar','2023-02-25',20000,null, null,90);
insert into employees values (102,'Lex','De Haan','2023-02-25',20000,null, 100,90);
insert into employees values (103,'Alexander','Hunold','2023-02-25',20000,null, 100,90);
insert into employees values (104,'Bruce','Ernst','2023-02-25',20000,null, 102,90);
insert into employees values (105,'Diana','Lorentz','2023-02-25',20000,null, 103,90);
insert into employees values (106,'Kevin','Mourgos','2023-02-25',20000,null, 103,90);
insert into employees values (107,'Trenna','Rajs','2023-02-25',20000,null, 100,90);
insert into employees values (108,'Curtis','Davies','2023-02-25',20000,null, 101,90);
insert into employees values (109,'Randall','Matos','2023-02-25',20000,null, null,90);
insert into employees values (110,'Peter','Vergas','2023-02-25',20000,null, 105,90);
insert into employees values (111,'Eleni','Zlotkey','2023-02-25',20000,null, 124,90);
insert into employees values (112,'Ellen','Abel','2023-02-25',20000,null, 120,90);
insert into employees values (113,'Jonathon','Taylor','2023-02-25',20000,null,103,90);
insert into employees values (114,'Kimerely','Grant','2023-02-25',20000,null,104,90);
insert into employees values (115,'Jennifer','Whalen','2023-02-25',20000,null,106,90);
insert into employees values (116,'Michael','Hartstein','2023-02-25',20000,null,null,90);
insert into employees values (117,'pat','Fay','2023-02-25',20000,null,149,90);
insert into employees values (118,'Shelley','Higgins','2023-02-25',20000,null,150,90);
insert into employees values (119,'William','Giants','2023-02-25',20000,null,121,90);
insert into employees values (120,'Hena','Montena','2023-02-25',20000,null, 123,90);

select employee_id,first_name from employees;
select employee_id,first_name from employees;
select employee_id = 108 from employees;
create table employee (
    eid int(10) unsigned NOT NULL,
    ename varchar(255) ,
    address varchar(255) ,
    salary int,
    dept_id int);
    create table department (
    dept_id int NOT NULL,
    depname varchar(255) ,
    floor varchar(255)
    );
    INSERT INTO employee(eid, ename, address, salary, dept_id) VALUES 
    (1,"John","dhaka",9000,101),(2,"dohn","haka",8000,102),(3,"Joh","dhak",5000,103),(4,"Jhn","dhka",1000,105);

    INSERT INTO department(dept_id, depname, floor)
    VALUES(101,"cse", 2nd),(102,"cse", "2nd"),(103,"cse", "2nd"),(105,"cse", "2nd");
    alter table department
    add PRIMARY key (dept_id); 
    
    alter table employee
    add foreign key (dept_id)
    references department (dept_id);

    select * from employee
    where salary between 6000 and 9000;

    select * from employee
    where ename like "%n" or "j%";
CREATE PROCEDURE GetCustomerInfo(IN CustomerAge INT)
 BEGIN
 SELECT * FROM CUSTOMERS WHERE AGE = CustomerAge;
 END
 CALL GetCustomerInfo(25);
 CREATE PROCEDURE GetEmployeeInfo
    @EmployeeID INT,
    @DepartmentID INT
AS
BEGIN
    SELECT * 
    FROM Employee
    WHERE EmployeeID = @EmployeeID
        AND DepartmentID = @DepartmentID;
END;

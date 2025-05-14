-- Select d.name as department , e1.name as employee, e1.salary as Salary
-- From Employee e1 join Department d on e1.DepartmentId = d.Id
-- Where  3 > (select count(distinct (e2.Salary))
--             from  Employee e2
--             where e2.Salary > e1.Salary
--             and e1.DepartmentId = e2.DepartmentId)


select d1.name as Department,e1.name as Employee, e1.salary as Salary from employee e1 join department d1 on e1.departmentid=d1.id where  3>(Select count(distinct e2.salary) from employee e2  where e2.departmentid=e1.departmentid and e2.salary >e1.salary);
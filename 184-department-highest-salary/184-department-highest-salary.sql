# SELECT d.name as Department, e.name as Employee, e.salary 
# FROM Employee as e, Department as d, 
#      ( SELECT emp.departmentId as id, max(emp.salary) as max_salary 
#        FROM employee as emp
#        GROUP BY emp.departmentId 
#      ) as T
# WHERE e.departmentId = d.id AND
#       e.salary = T.max_salary AND
#       d.id = T.id
      
      
      
# ### 2nd Solution     IMPORTANT CONCEPT

# SELECT D.Name AS Department ,E.Name AS Employee ,E.Salary 
# from 
# 	Employee E,
# 	Department D 
# WHERE E.DepartmentId = D.id 
#   AND (DepartmentId,Salary) in 
#   (SELECT DepartmentId,max(Salary) as max FROM Employee GROUP BY DepartmentId)
      
      
Select Department.Name Department, emp1.Name Employee, emp1.Salary from 
Employee emp1 join Department on emp1.DepartmentId = Department.Id
where emp1.Salary = (Select Max(Salary) from Employee emp2 where emp2.DepartmentId = emp1.DepartmentId);
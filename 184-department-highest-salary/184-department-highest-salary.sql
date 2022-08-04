SELECT d.name as Department, e.name as Employee, e.salary 
FROM Employee as e, Department as d, 
     ( SELECT emp.departmentId as id, max(emp.salary) as max_salary 
       FROM employee as emp
       GROUP BY emp.departmentId 
     ) as T
WHERE e.departmentId = d.id AND
      e.salary = T.max_salary AND
      d.id = T.id
      
      
      

      
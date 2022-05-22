 
select name as Employee from employee as T 
where salary > (select salary from Employee where T.managerId = id);


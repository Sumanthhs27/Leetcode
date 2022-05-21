# Write your MySQL query statement below
SELECT MAX(SALARY) as SecondHighestSalary FROM Employee WHERE SALARY < (SELECT MAX(SALARY) FROM Employee);
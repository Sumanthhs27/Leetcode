CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT;
SET M=N-1;
  RETURN (
      SELECT 
        CASE 
            WHEN Count(DISTINCT salary) < N THEN NULL
            ELSE (SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT M,1)
        END 
      FROM Employee      
  );
END

### This is for 3 consequtive numbers

SELECT DISTINCT a.num as ConsecutiveNums
FROM Logs as a
INNER JOIN Logs as b
ON a.id + 1 = b.id
    INNER JOIN Logs as c
    ON b.id + 1 = c.id
WHERE a.num = b.num AND b.num = c.num;


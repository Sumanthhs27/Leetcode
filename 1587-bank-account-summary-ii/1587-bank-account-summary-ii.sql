SELECT u.name, SUM(t.amount) as balance
FROM Users as u
INNER JOIN Transactions as t
ON u.account = t.account
GROUP BY u.name
HAVING SUM(t.amount) >= 10000;

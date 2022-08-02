SELECT  v.customer_id, count(v.visit_id) as count_no_trans 
FROM visits as v
LEFT JOIN Transactions AS t
ON t.visit_id = v.visit_id
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id;


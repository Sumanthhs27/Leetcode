SELECT customer_number FROM Orders 
GROUP BY customer_number 
ORDER BY Count(order_number) DESC LIMIT 1;

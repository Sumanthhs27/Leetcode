

# SELECT SalesPerson.name  FROM SalesPerson
# left JOIN Orders
#     ON SalesPerson.sales_id = orders.sales_id 
#     where  orders.com_id NOT IN  (
#         SELECT com_id from company where name = "RED"
#         ) || orders.com_id  IS NULL;


SELECT name from SalesPerson where sales_id NOT IN 
(
    SELECT orders.sales_id from orders 
    JOIN company
        ON company.com_id = orders.com_id 
    where company.name = "RED"
)

```mysql
SELECT c.customer_name, ROUND(SUM(CAST(i.total_price AS DECIMAL(10,6))), 6)
FROM customer c
INNER JOIN invoice i ON c.id=i.customer_id
GROUP BY c.customer_name
HAVING SUM(i.total_price)<0.25*(SELECT AVG(total_price) FROM invoice)
ORDER BY ROUND(SUM(i.total_price), 6) DESC;
```

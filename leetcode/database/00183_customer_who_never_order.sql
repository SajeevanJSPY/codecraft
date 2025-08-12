-- LeetCode 183. Customers Who Never Order
-- https://leetcode.com/problems/customers-who-never-order/description/
--

-- Submission 001: 12/08/2025
-- 		Runtime: 201 ms
--
SELECT name AS Customers
FROM customers
WHERE NOT EXISTS (
	SELECT *
	FROM orders
	WHERE orders.customerid = customers.id
);

-- Submission 002: 12/08/2025
-- 		Runtime: 298 ms
--
SELECT name AS Customers
FROM customers c
LEFT JOIN orders o ON c.id = o.customerid
WHERE o.id IS NULL;
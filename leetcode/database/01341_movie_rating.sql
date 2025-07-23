-- LeetCode 1341. Movie Rating
-- https://leetcode.com/problems/movie-rating/description/
--


-- Submission 002: 23/07/2025
-- 		Runtime: 310 ms
--
SELECT name AS Employee
FROM Employee e
WHERE e.managerid IS NOT NULL AND 
(SELECT salary FROM Employee WHERE id = e.managerId) < e.salary;


-- Submission 003: 23/07/2025
-- 		Runtime: 223 ms
--
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m ON e.managerId = m.id
WHERE e.salary > m.salary;


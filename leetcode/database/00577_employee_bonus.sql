-- LeetCode 577. Employee Bonus
-- https://leetcode.com/problems/employee-bonus/
--

-- Submission 001: 23/07/2025
-- 		Runtime: 394 ms
--
SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b ON b.empid = e.empid
WHERE b.bonus IS NULL OR b.bonus < 1000;


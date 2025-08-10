-- LeetCode 176. Second Highest Salary
-- https://leetcode.com/problems/second-highest-salary/description/
--

-- Submission 001: 10/08/2025
-- 		Runtime: 628 ms
--
SELECT COALESCE(
	(
		SELECT DISTINCT salary
		FROM employee
		ORDER BY salary DESC
		OFFSET 1 LIMIT 1
	),
	NULL
) AS SecondHighestSalary;

-- Submission 001: 10/08/2025
-- 		Runtime: 227 ms
--
SELECT max(salary) AS SecondHighestSalary
FROM employee
WHERE salary < (SELECT max(salary) FROM employee);

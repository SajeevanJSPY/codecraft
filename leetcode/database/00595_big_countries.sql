-- LeetCode 595. Big Countries
-- https://leetcode.com/problems/big-countries/description/
--

-- Submission 001: 24/07/2025
-- 		Runtime: 343 ms
--
SELECT name, population, area FROM World w
WHERE w.area >= 3000000 OR w.population >= 25000000;
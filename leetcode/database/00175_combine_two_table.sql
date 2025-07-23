-- LeetCode 175. Combine Two Tables
-- https://leetcode.com/problems/combine-two-tables/submissions
--

-- Submission 001: 23/07/2025
-- 		Runtime: 282 ms
--
SELECT p.firstName, p.lastName, a.city, a.state FROM Person p
LEFT JOIN Address a ON p.personId = a.personId;


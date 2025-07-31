-- LeetCode 182. Duplicate Emails
-- https://leetcode.com/problems/duplicate-emails/description/
--

-- Submission 001: 31/07/2025
-- 		Runtime: 309 ms
--
select email
from Person
group by email
having count(email) > 1;

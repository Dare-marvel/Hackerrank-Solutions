### [Draw The Triangle 1](https://www.hackerrank.com/challenges/draw-the-triangle-1/problem?isFullScreen=true)

## Explanation:

## Code:
```mysql
-- Create a temporary table to store the sequence of numbers
CREATE TEMPORARY TABLE Numbers (n INT);

-- Insert numbers from 20 to 1 into the temporary table
INSERT INTO Numbers (n)
VALUES (20), (19), (18), (17), (16), (15), (14), (13), (12), (11),
       (10), (9), (8), (7), (6), (5), (4), (3), (2), (1);

-- Concatenate '*' based on the value of 'n' and print the result
SELECT REPEAT('* ', n) AS pattern
FROM Numbers;

-- Drop the temporary table
DROP TEMPORARY TABLE Numbers;
```

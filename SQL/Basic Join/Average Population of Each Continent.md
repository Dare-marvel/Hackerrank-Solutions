### [Average Population of Each Continent](https://www.hackerrank.com/challenges/average-population-of-each-continent/problem?isFullScreen=true)

## Explanation:

## Code:
```mysql
select COUNTRY.Continent , floor(avg(CITY.Population))
from country
inner join city
on CITY.CountryCode = COUNTRY.Code
group by COUNTRY.Continent;
```

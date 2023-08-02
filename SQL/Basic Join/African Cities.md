### [African Cities](https://www.hackerrank.com/challenges/african-cities/problem?isFullScreen=true)

## Explanation:

## Code:
```mysql
select city.name from city 
inner join country 
on CITY.CountryCode = COUNTRY.Code
where continent="Africa";
```

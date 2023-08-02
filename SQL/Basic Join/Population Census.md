### [Population Census](https://www.hackerrank.com/challenges/asian-population/problem?isFullScreen=true)

## Explanation:

## Code:
```mysql
select sum(city.population) from city
inner join country
on CITY.CountryCode=COUNTRY.Code
where continent="Asia";
```

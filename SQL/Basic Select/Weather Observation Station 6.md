### [Weather Observation Station 6](https://www.hackerrank.com/challenges/weather-observation-station-6/problem?isFullScreen=true)

## Explanation:

## Code:
### Method-1
```mysql
select distinct city from station where left(city,1) in ('a','e','i','o','u');
```

### Method-2
```mysql
SELECT DISTINCT 
CITY 
FROM STATION 
WHERE lower(substr(CITY,1,1)) in ('a','e','i','o','u') ;
```

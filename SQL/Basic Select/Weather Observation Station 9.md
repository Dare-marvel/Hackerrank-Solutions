### [Weather Observation Station 9](https://www.hackerrank.com/challenges/weather-observation-station-9/problem?isFullScreen=true)

## Explanation:

## Code:
### Method-1
```mysql
select distinct city from station where left(city,1) not in ('a', 'e', 'i', 'o', 'u');
```

### Method-2
```mysql
SELECT DISTINCT CITY FROM STATION WHERE
    LOWER(SUBSTR(CITY, 1, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');
```

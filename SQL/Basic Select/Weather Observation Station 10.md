### [Weather Observation Station 10](https://www.hackerrank.com/challenges/weather-observation-station-10/problem?isFullScreen=true)

## Explanation:

## Code:
### Method-1
```mysql
select distinct city from station where right(city,1) not in ('a', 'e', 'i', 'o', 'u');
```

### Method-2
```mysql
SELECT DISTINCT CITY FROM STATION WHERE
    LOWER(SUBSTR(CITY, -1, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');
```

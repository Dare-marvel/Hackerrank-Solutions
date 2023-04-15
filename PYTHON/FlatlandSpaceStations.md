### [Flatland Space Stations](hackerrank.com/challenges/flatland-space-stations/problem?isFullScreen=false)

## Key Insight : 
calculate the distance between adjacent space stations and 
take the maximum of half of that distance and the distance from the first and last stations to their nearest endpoints.

## Code:
```python 
# read input values for number of cities and number of space stations
n, m = map(int, input().split())

# read the positions of the space stations
c = sorted(list(map(int, input().split())))

# initialize the maximum distance to be the distance from the first city to the first space station
# or from the last space station to the last city, whichever is greater
max_d = max(c[0], n-1-c[-1])

# iterate over the sorted list of space stations and calculate the maximum distance to the nearest space station
for i in range(1, m):
    # calculate the distance between the current and previous space stations and divide by 2
    dist = (c[i] - c[i-1]) // 2
    
    # update the maximum distance seen so far if the current distance is greater
    max_d = max(max_d, dist)
    
# print the maximum distance to the nearest space station
print(max_d)
```

### [Flatland Space Stations](hackerrank.com/challenges/flatland-space-stations/problem?isFullScreen=false)

## Key Insight : 
calculate the distance between adjacent space stations and 
take the maximum of half of that distance and the distance from the first and last stations to their nearest endpoints.

## Explanation:
This code is a Python program that calculates the maximum distance from a city to the nearest space station. Here's how it works:

1. The program takes two integers `n` and `m` as input from the user, representing the number of cities and the number of space stations respectively.
2. It then takes `m` integers as input from the user and stores them in a sorted list `c`, representing the positions of the space stations.
3. The program initializes a variable `max_d` to be the maximum distance from the first city to the first space station or from the last space station to the last city, whichever is greater.
4. It then iterates over the sorted list of space stations using a for loop and calculates the maximum distance to the nearest space station using a formula.
5. Finally, it prints the maximum distance.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(m log m) because it uses the `sorted()` function to sort the input list of space stations, which has a time complexity of O(m log m).

### `Space Complexity`:
The space complexity is O(m) because it uses a list of size m to store intermediate results.

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

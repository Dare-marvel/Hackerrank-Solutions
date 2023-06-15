### [The Grid Search](https://www.hackerrank.com/challenges/the-grid-search/problem)

## Brief Description:
We first check whether the first row of search pattern is present or not in the grid<br>
As we find the first row,we set match to true and then we run a for loop to check for the entire search pattern from second line of it<br>
If we find that any line of search pattern is not present in the grid we assign match as false and break<br>
We then check whether match is true or false and return YES or NO accordingly<br>
At the end of the function we return NO

## Key Insights:
Code to look at:<br>
```python
    for i in range(len(grid) - len(searchPattern) + 1):
        for j in range(len(grid[0]) - len(searchPattern[0]) + 1):
```
We don't run the loop till the end of the number of rows and columns because once we go beyond the number of rows or columns in search<br> pattern we don't have any possiblility of finding the search pattern in the grid<br>


## Time and Space Complexity:
### `Time Complexity`
The time complexity of the function gridSearch is O((R-r+1)(C-c+1)rc), where R is the number of rows in the grid, C is the number of columns in the grid, r is the number of rows in the search pattern, and c is the number of columns in the search pattern. This is because the function iterates over every possible starting position of the search pattern in the grid, which is (R-r+1) * (C-c+1), and for each starting position, it checks every cell in the search pattern, which is r*c.<br>

### `Space Complexity`
The space complexity of the function is O(1), because it only uses a constant amount of additional memory regardless of the size of the<br> input grid and search pattern.<br>

## Code:
```python
# Define a function to search for a pattern in a 2D grid
def gridSearch(grid, searchPattern):
    # Iterate over every possible starting position of the search pattern in the grid
    for i in range(len(grid) - len(searchPattern) + 1):
        for j in range(len(grid[0]) - len(searchPattern[0]) + 1):
            # Check if the first row of the search pattern matches the corresponding row in the grid
            if grid[i][j:j+len(searchPattern[0])] == searchPattern[0]:
                match = True
                # Check the remaining rows of the search pattern to see if they match the corresponding rows in the grid
                for k in range(1, len(searchPattern)):
                    if grid[i+k][j:j+len(searchPattern[0])] != searchPattern[k]:
                        match = False
                        break
                # If the entire search pattern matches the corresponding part of the grid, return 'YES'
                if match:
                    return 'YES'
    # If the function completes the search without finding any matches, return 'NO'
    return 'NO'

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the size of the grid and the grid itself
    R, C = map(int, input().split())
    grid = [input() for _ in range(R)]

    # Read the size of the search pattern and the pattern itself
    r, c = map(int, input().split())
    searchPattern = [input() for _ in range(r)]

    # Call the gridSearch function and print the result
    print(gridSearch(grid, searchPattern))

```

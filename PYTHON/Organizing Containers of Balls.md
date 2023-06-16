### [Orgranizing Containers of Balls](https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem?isFullScreen=false)

## Key insight:
The idea behind this approach is that if we can match the number of balls of each type to the number of balls in each container,<br>
then we can organize the balls in a way that satisfies the conditions of the problem.<br>

## Explanation:
This code is a Python program that determines whether it is possible to rearrange the balls in a given set of containers such that each container contains only balls of the same type for multiple test cases. Here's how it works:

1. The program defines a function `OrgContainers()` that takes a matrix `matrix` as input and checks if it is possible to rearrange the balls using a series of list comprehensions and if-else statements. If it is possible, the function prints 'Possible'. Otherwise, it prints 'Impossible'.
2. The function calculates the total number of balls in each container and stores them in a list `container_sizes`. It then calculates the number of balls of each type in all containers and stores them in a list `ball_counts`.
3. The function sorts both lists in ascending order and checks if they are equal using the `all()` function. If they are equal, it is possible to rearrange the balls. Otherwise, it is not possible.
4. The program takes an integer `q` as input from the user, representing the number of test cases.
5. It then enters a for loop that iterates over each test case and takes an integer `n` as input from the user, representing the number of containers and ball types.
6. The program creates an empty list `matrix` and takes `n` lists of integers as input from the user to populate it, representing the description of rows and columns of containers.
7. It then calls the `OrgContainers()` function to check if it is possible to rearrange the balls and prints the result.

Is there anything else you would like to know?
## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(q*n^2) because it iterates over `q` test cases and calls the `OrgContainers()` function for each test case, which has a time complexity of O(n^2) because it uses two list comprehensions that iterate over each element in the input matrix once to calculate the result.

### `Space Complexity`:
The space complexity is O(n^2) because it uses a matrix of size n*n to store intermediate results.

## Code : 
```python
def OrgContainers(matrix):
    # total number of balls in that container
    container_sizes=[sum(matrix[i]) for i in range(len(matrix))] 
    # number of balls of that type in each container
    ball_counts=[sum(matrix[i][j] for i in range(len(matrix))) for j in range(len(matrix))] 
    
    #Sorting the containers in ascending order
    container_sizes.sort()
    ball_counts.sort()
    
    if(all(container_sizes[i] == ball_counts[i] for i in range(len(container_sizes)))):
        print('Possible')
    else:
        print('Impossible')

#The number of queries
q=int(input())
for i in range(q):
    #The number of containers and ball types
    n=int(input())

    matrix=[]

    #Description of rows and columns of containers
    for i in range(n):
        l=[int(t) for t in input().split()]
        matrix.append(l)
    OrgContainers(matrix)
```

### [Queens Attack II](https://www.hackerrank.com/challenges/queens-attack-2/problem)

## Explanation:
This code is a Python program that determines whether it is possible to rearrange the balls in a given set of containers such that each container contains only balls of the same type for multiple test cases. Here's how it works:

1. The program defines a function `OrgContainers()` that takes a matrix `matrix` as input and checks if it is possible to rearrange the balls using a series of list comprehensions and if-else statements. If it is possible, the function prints 'Possible'. Otherwise, it prints 'Impossible'.
2. The function calculates the total number of balls in each container and stores them in a list `container_sizes`. It then calculates the number of balls of each type in all containers and stores them in a list `ball_counts`.
3. The function sorts both lists in ascending order and checks if they are equal using the `all()` function. If they are equal, it is possible to rearrange the balls. Otherwise, it is not possible.
4. The program takes an integer `q` as input from the user, representing the number of test cases.
5. It then enters a for loop that iterates over each test case and takes an integer `n` as input from the user, representing the number of containers and ball types.
6. The program creates an empty list `matrix` and takes `n` lists of integers as input from the user to populate it, representing the description of rows and columns of containers.
7. It then calls the `OrgContainers()` function to check if it is possible to rearrange the balls and prints the result.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(q*n^2) because it iterates over `q` test cases and calls the `OrgContainers()` 
function for each test case, which has a time complexity of O(n^2) because it uses two list comprehensions that iterate 
over each element in the input matrix once to calculate the result.

### `Space Complexity`:
The space complexity is O(n^2) because it uses a matrix of size n*n to store intermediate results.

## Code:
```py
# import time
# Stime=time.time()
def queensAttack(n,r_q,c_q,obstacles):
    count=0
    direction=[(1,0), (1,1), (0,1), (-1,1), (-1,0), (-1,-1), (0,-1), (1,-1)]
    for u,v in direction:
        r_q_temp , c_q_temp=r_q,c_q
        #Converting it to a set avoids uncessary searches
        Obset=set(obstacles)
        while True:
            r_q_temp+=u
            c_q_temp+=v
            if (r_q_temp,c_q_temp) in Obset or not (0 < r_q_temp <= n >= c_q_temp > 0):
                break
            count+=1
    return count
    
n,k = [int(a) for a in input().split()]

r_q,c_q=[int(a) for a in input().split()] 

obstacles=[]

for i in range(k):
    a , b = [int(t) for t in input().split()]
    obstacles.append((a,b))

print(queensAttack(n,r_q,c_q,obstacles))

# Etime=time.time()
# elTime=Etime-Stime
# print(elTime)
```

### Reference : 
[Link 1](https://www.thepoorcoder.com/hackerrank-queens-attack-ii-solution/)

[Link 2](https://www.kindsonthegenius.com/queen-attack-ii-simple-solution-hackerrank/)

### [collections.Counter()](https://www.hackerrank.com/challenges/collections-counter/problem?isFullScreen=false)
### [Reference about Counter()](https://docs.python.org/2/library/collections.html#collections.Counter)

## Explanation:
This code calculates the total earnings of a shopkeeper who is selling shoes of different sizes. Here is the main logic of the code:

1. The code reads the number of shoe sizes the shopkeeper has and the list of shoe sizes.
2. The list of shoe sizes is converted into a Counter object, which counts the number of occurrences of each size in the list.
3. The code reads the number of customers and initializes the total earnings to 0.
4. The code then loops through each customer and reads the size and price offered by the customer.
5. The code checks if the shopkeeper has the requested size by checking if the count of that size in the Counter object is greater than 0.
6. If the shopkeeper has the requested size, the price offered by the customer is added to the total earnings and the count of that size in the Counter object is decreased by 1.
7. Finally, after looping through all customers, the code prints the total earnings.


## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(N) where N is the number of customers since it loops through each customer once.
### `Space Complexity`:
The space complexity is O(X) where X is the number of shoe sizes since it stores a Counter object with X elements.

## Code:
```py
from collections import Counter

# Read the number of shoe sizes the shopkeeper has
X = int(input())

# Read the list of shoe sizes and convert it into a Counter object
sizeList = list(map(int,input().split()))
sizeList = Counter(sizeList)

# Read the number of customers
N = int(input())

# Initialize total earnings to 0
totEarning = 0

# Loop through each customer
for _ in range(N):
    # Read the size and price offered by the customer
    x , y = [int(a) for a in input().split()]
    
    # Check if the shopkeeper has the requested size
    if sizeList[x] > 0:
        # If yes, add the price to total earnings and decrease the count of that size by 1
        totEarning += y
        sizeList[x] -= 1
        
# Print the total earnings
print(totEarning)

```

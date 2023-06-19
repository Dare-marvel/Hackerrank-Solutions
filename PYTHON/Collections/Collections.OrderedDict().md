### [Collections.OrderedDict()](https://www.hackerrank.com/challenges/py-collections-ordereddict/problem?isFullScreen=false)

## Key Insights :
In the for loop, the input is taken using the `input()` function. This function reads a line of input from the user as a string. The string is then split into a list of strings using the `split()` method. This method splits the string at each occurrence of a whitespace character and returns a list of the resulting substrings.
For example, if the input is `"apple 10"`, `input().split()` will return the list `["apple", "10"]`. The last element of this list is extracted as the item price using `[-1]` and converted to an integer using `int()`. All elements of the list except the last one are joined into a single string using `" ".join()` to get the item name.

## Explanation :
This code reads a list of items and their prices and calculates the total price for each item. Here is the main logic of the code:

1. The code reads the number of items and creates an empty OrderedDict called itemDict. This OrderedDict will store the total price for each item.
2. The code then loops through each item and reads its name and price. It splits the input into a list of strings using `split()`.
3. The code extracts the last element of the list as the item price and converts it to an integer using `int()`.
4. The code then joins all elements of the list except the last one using `" ".join()` to get the item name.
5. The code checks if the item name is already in itemDict using `get()`. If it is, it adds the item price to the total price for that item in itemDict. If it is not, it adds a new entry to itemDict with the key as the item name and the value as the item price.
6. After reading all items, the code loops through each key-value pair in itemDict and prints them using an f-string.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is `O(n)` where n is the number of items since it loops through each item once.

### `Space Complexity`:
The space complexity is also `O(n)` since it stores an OrderedDict with n entries.

## Code:
```py
from collections import OrderedDict

# Read the number of items
N= int(input())

# Create an empty OrderedDict called itemDict
itemDict= OrderedDict()

# Loop through each item
for i in range(N):
    # Read the item name and price and split them into a list of strings
    item = input().split()
    
    # Extract the last element of the list as the item price and convert it to an integer
    itemPrice= int(item[-1])
    
    # Join all elements of the list except the last one to get the item name
    itemName= " ".join(item[:-1])
    
    # Check if the item name is already in itemDict using get()
    if itemDict.get(itemName):
        # If yes, add the item price to the total price for that item in itemDict
       itemDict[itemName] += itemPrice
    else:
        # If no, add a new entry to itemDict with the key as the item name and the value as the item price
       itemDict[itemName] = itemPrice

# Loop through each key-value pair in itemDict and print them using an f-string
for key , value in itemDict.items():
    print(f"{key} {value}")

```

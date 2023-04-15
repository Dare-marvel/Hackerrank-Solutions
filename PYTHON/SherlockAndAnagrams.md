### [Sherlock and Anagrams](https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem)

## Key Insights:
#### Part 1:
```python
if len(newStr) == len(set(list(newStr))):
        return 0
```
If all letter of the string are unique then we can't find any anagrams in the string so return 0

#### Part 2:
```python
# Memoize substrings
    substr_count = defaultdict(int)
    for i in range(len(newStr)):
        for j in range(i+1,len(newStr)+1):
            substr_count[''.join(sorted(newStr[i:j]))] += 1
```
In the default dictionary map the count of all anagrams of a particular substring to the sorted substring.<br>
For e.g. if there is a substring 'abc' and we encounter 'cab' or 'bac' we add two more to the sorted part<br>

#### Part 3:
```python
anaCount = 0
    for count in substr_count.values():
        # Use the combinatorial formula to count the number of anagram pairs
        anaCount += count*(count-1)//2
    
    return anaCount
```
We use the formula <sup>count</sup>C<sub>2</sub> to get all possible combinations

## Code:
#### Optimized Solution
```python
# Import the defaultdict module from collections, which allows creating a dictionary with default values
from collections import defaultdict

# Define a function to count the number of pairs of substrings of a string that are anagrams of each other
def sherlockAndAnagrams(newStr):
    # If all characters of the string are unique, there are no anagrams
    if len(newStr) == len(set(list(newStr))):
        return 0
    
    # Memoize all the possible substrings of the string in a dictionary
    substr_count = defaultdict(int)
    for i in range(len(newStr)):
        for j in range(i+1, len(newStr)+1):
            # Sort the substring and add it to the dictionary with its count
            substr_count[''.join(sorted(newStr[i:j]))] += 1
    
    # Count the number of anagram pairs
    anaCount = 0
    for count in substr_count.values():
        # Use the combinatorial formula to count the number of anagram pairs
        anaCount += count*(count-1)//2
    
    return anaCount

# Take the number of test cases as input
queries = int(input().strip())

# For each test case, take the string as input and print the number of anagram pairs
for i in range(queries):
    newStr = input()
    print(sherlockAndAnagrams(newStr))
```
---------------------------------------------------------------------------------------------------------------------------------------------

#### Brute force solution ( Time limit exceeded )
```python
# Function to find all substrings of a given string
def findAllSubstr(newStr):
    n = len(newStr)
    result = []
    for i in range(n):
        for j in range(i+1,n+1):
            result.append(newStr[i:j])
    return result

# Function to check if two strings are anagrams of each other
def AnagCheck(str1,str2):
    return sorted(list(str1)) == sorted(list(str2))

# Function to count the number of anagrams in a given array of strings
def countAnagram(currentIndex,anagArr):
    currentAnag = anagArr[currentIndex]
    restArr = anagArr[currentIndex+1:]
    
    count = 0
    for i in range(len(restArr)):
        if len(currentAnag) == len(restArr[i]) and AnagCheck(currentAnag,restArr[i]):
            count += 1
    return count

# Main function to solve the problem
def sherlockAndAnagrams(newStr):
    # If the string contains all unique characters, there can be no anagrams
    if len(newStr) == len(set(list(newStr))):
        return 0
    
    # Find all substrings of the given string
    allAnagrams = findAllSubstr(newStr)
    
    # Count the number of anagrams
    anaCount = 0
    for i in range(len(allAnagrams)):
        anaCount += countAnagram(i,allAnagrams)
        
    return anaCount

# Take user input for number of queries and input strings
queries = int(input().strip())
for i in range(queries):
    newStr = input()
    print(sherlockAndAnagrams(newStr))

```

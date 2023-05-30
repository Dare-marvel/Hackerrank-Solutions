### [Bigger is Greater](https://www.hackerrank.com/challenges/bigger-is-greater/problem)

## Explanation of Code:
* The first line defines the BiggerIsGreater function. The function takes a string as input and returns a new string that is greater than the input string.
* The second and third lines define the i and j variables. i is used to iterate through the input string, and j is used to find the first character in the input string that is greater than the character at i.
* The fourth line defines the flag variable. flag is used to keep track of whether or not a character greater than the character at i has been found.
* The fifth line loops through the input string, starting from the second-to-last character and working backwards. For each character, the function checks if it is less than the character to its right. If it is, the flag variable is set to 1 and the loop is exited.
* The sixth line checks the value of the flag variable. If flag is 0, then no character greater than the character at i was found, and the function returns the string "no answer".
* The seventh line loops through the input string, starting from the last character and working backwards. For each character, the function checks if it is greater than the character at i. If it is, the loop is exited and the value of j is saved.
* The eighth line swaps the characters at i and j.
* The ninth line defines the st and end variables. st is used to index the first character after the character that was swapped, and end is used to index the last character in the input string.
* The tenth line reverses the characters in the input string, starting from the character at st and working backwards.
* The eleventh line joins the characters in the input string and returns the resulting string.

## Time and Space complexity:
### `Time Complexity`
The time complexity of the given code is `O(n^2)`, where n is the length of the input string lstr. This is because there are two nested loops in the BiggerIsGreater function. The first loop iterates from len(lstr)-2 to 0, and the second loop iterates from len(lstr)-1 to i. In the worst case scenario, both loops will iterate up to n times, resulting in O(n^2) time complexity.

### `Space Complexity`
The space complexity of the code is `O(n)`, where n is the length of the input string lstr. This is because the code creates a list l to store the input strings, and each string can have a maximum length of n. Additionally, the BiggerIsGreater function uses a constant amount of extra space for variables i, j, flag, st, and end. Therefore, the overall space complexity is dominated by the space required to store the input strings, which is O(n).

## Code:
```py
def BiggerIsGreater(lstr):
    i , j = 0 , 0
    flag = 0
    # Find the largest index i such that lstr[i] < lstr[i + 1]
    for i in range(len(lstr)-2, -1, -1):
        if lstr[i] < lstr[i + 1]:
            flag = 1
            break
    # If no such index is found, return 'no answer'
    if flag == 0:
        return 'no answer'
    else:
        # Find the largest index j such that lstr[j] > lstr[i]
        for j in range(len(lstr)-1, i, -1):
            if lstr[j] > lstr[i]:
                break
        # Swap lstr[i] and lstr[j]
        lstr[i], lstr[j] = lstr[j], lstr[i]
        st, end = i+1, len(lstr)
        # Reverse the substring from index i+1 to the end
        lstr[st:end] = lstr[st:end][::-1]
        return "".join(lstr)

t = int(input())  # Read the number of test cases
l = []
for i in range(t):
    l.append(list(input()))  # Read each test case as a list of characters

for lstr in l:
    print(BiggerIsGreater(lstr))  # Print the result for each test case
```

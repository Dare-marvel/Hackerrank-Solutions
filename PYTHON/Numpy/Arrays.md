### [Arrays](https://www.hackerrank.com/challenges/np-arrays/problem?isFullScreen=true)

## Explanation:
The main logic of the code can be summarized in the following points:
1. The code defines a function called `arrays` that takes a list of strings as input.
2. The function converts the input list to a numpy array of floats using `numpy.array(arr).astype('float64')`.
3. The numpy array is then reversed using the `numpy.flip` function.
4. The reversed numpy array is returned as the output of the function.
5. The code then reads a space-separated string of numbers from the user and splits it into a list using `input().strip().split(' ')`.
6. The `arrays` function is called with the input list as an argument and the result is stored in the `result` variable.
7. Finally, the resulting numpy array is printed to the console.
 
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the length of the input list. This is because the `numpy.array` and `numpy.flip` 
functions both have a time complexity of O(n).

### `Space Complexity`:
The space complexity of this code is also O(n), as it requires creating a new numpy array of size n to store the reversed array.


## Code:
```py
import numpy # Importing the numpy module

def arrays(arr):
    # This function takes a list of strings as input and returns a numpy array of floats in reverse order
    return numpy.flip((numpy.array(arr).astype('float64'))) # Convert the input list to a numpy array of floats and then reverse it using numpy.flip

arr = input().strip().split(' ') # Read a space-separated string of numbers from the user and split it into a list
result = arrays(arr) # Call the 'arrays' function with the input list as an argument
print(result) # Print the resulting numpy array

```

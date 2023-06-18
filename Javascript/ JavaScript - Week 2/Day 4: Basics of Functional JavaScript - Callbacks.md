### [Day 4: Basics of Functional JavaScript - Callbacks](https://www.hackerrank.com/contests/javascript-week2/challenges/js-callbacks)

## Explanation:
The main logic of the code can be explained as follows:
1. The `myFilter` function takes in an array and a callback function as arguments.
2. It creates a new empty array `new_arr`.
3. It iterates over each element in the input array using a for loop.
4. For each element, it calls the callback function with the element as an argument.
5. If the callback function returns `true`, the element is pushed to the `new_arr`.
6. After all elements have been processed, `new_arr` is returned.

The `processData` function takes in an array of numbers as an argument and calls the `myFilter` function with the input array and an anonymous function that returns `true` if a number is even and `false` if it's odd. The result of calling `myFilter` is then logged to the console.

## Time and Space Complexity:

### `Time Complexity`:
The time complexity of this code is O(n), where n is the length of the input array, because it needs to iterate over each element in the 
input array once.

### `Space Complexity`:
The space complexity is also O(n), because it needs to create a new array that could potentially have the same length as the input array.

## Code:
```js
// Define the myFilter function
function myFilter(my_array, callback){
    // Create a new empty array
    let new_arr = []
    // Iterate over each element in the input array
    for(let index in my_array){
        // Call the callback function with the current element as an argument
        if(callback(my_array[index]) == true){
            // If the callback function returns true, push the current element to the new_arr
            new_arr.push(my_array[index])
        }
    }
    // Return the new_arr after all elements have been processed
    return new_arr;
}

// Define the processData function
function processData(inputArray) {
    // Call the myFilter function with the inputArray and an anonymous function that returns true if a number is even and false if it's odd
    console.log(myFilter(inputArray, (x) => Number(x) % 2 == 0));   
} 

// Set up standard input
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

// When standard input ends, call the processData function with the input data split into an array of numbers
process.stdin.on("end", function () {
   processData(_input.split(' ').map(num => Number(num)));
});

```

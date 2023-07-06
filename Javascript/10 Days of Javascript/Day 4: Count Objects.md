### [Day 4: Count Objects](https://www.hackerrank.com/challenges/js10-count-objects/problem?isFullScreen=true)

## Explanation:
This code reads input from the standard input stream, processes it, and calls the `getCount` function to count the number of objects in an array that have equal `x` and `y` properties.

The main logic of this code can be summarized in the following points:

1. The code sets up event listeners on the `process.stdin` object to read input from the standard input stream. The input is stored in the `inputString` variable as a string.
2. When the end of the input is reached, the `inputString` is split into an array of strings, one for each line of input. The `main` function is then called to process the input.
3. The `readLine` function is defined to return the next line of input from the `inputString` array each time it is called.
4. The `getCount` function is defined to take an array of objects as an argument and return a count of the number of objects in the array that have equal `x` and `y` properties. It does this by iterating over each object in the array and checking if its `x` and `y` properties are equal. If they are, it increments a count variable. At the end, it returns the final value of the count variable.
5. The `main` function reads the first line of input to get the number of objects in the array. It then creates an empty array called `objects`.
6. The `main` function then enters a loop that iterates over each remaining line of input. For each line, it splits it into two parts, converts them to numbers, and creates a new object with those numbers as its `x` and `y` properties. This object is then added to the `objects` array.
7. After all of the objects have been added to the `objects` array, the `main` function calls the `getCount` function with the `objects` array as an argument and logs its return value to the console.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the number of objects in the array, because it needs to iterate over each object once to count how many have equal `x` and `y` properties.

### `Space Complexity`:
The space complexity of this code is O(n) because it needs to store an array of n objects in memory.

## Code:
```js
'use strict';

// Set up the standard input stream to read input as UTF-8 strings
process.stdin.resume();
process.stdin.setEncoding('utf-8');

// Variables to store the input as it is read
let inputString = '';
let currentLine = 0;

// Event listener to read data from the standard input stream and add it to the inputString variable
process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

// Event listener to process the input when the end of the input is reached
process.stdin.on('end', _ => {
    // Split the input into an array of strings, one for each line of input
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    // Call the main function to process the input
    main();    
});

// Function to return the next line of input from the inputString array
function readLine() {
    return inputString[currentLine++];
}

/*
 * Return a count of the total number of objects 'o' satisfying o.x == o.y.
 * 
 * Parameter(s):
 * objects: an array of objects with integer properties 'x' and 'y'
 */
function getCount(objects) {
    // Variable to store the count of objects with equal x and y properties
    let count = 0;
    // Iterate over each object in the objects array
    for(let i=0;i<Object.keys(objects).length;i++){
        // If the object's x and y properties are equal, increment the count variable
        if(objects[i].x === objects[i].y){
            count++;
        }
    }
    
    // Return the final value of the count variable
    return count;
}


function main() {
    // Read the first line of input to get the number of objects in the array
    const n = +(readLine());
    // Create an empty array to store the objects
    let objects = [];
    
    // Iterate over each remaining line of input
    for (let i = 0; i < n; i++) {
        // Split the line into two parts and convert them to numbers
        const [a, b] = readLine().split(' ');
        
        // Create a new object with x and y properties set to the numbers from the line of input
        objects.push({x: +(a), y: +(b)});
    }
    
    // Call the getCount function with the objects array as an argument and log its return value to the console
    console.log(getCount(objects));
}

```

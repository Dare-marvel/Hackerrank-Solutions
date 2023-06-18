### [Day 4: Basics of Functional JavaScript - Closure](https://www.hackerrank.com/contests/javascript-week2/challenges/js-closure)

## Explanation:
The main logic of the code can be explained as follows:
1. The `multiplier` function takes in a number `x` as an argument.
2. It defines a `returnProduct` function that takes in a number `y` as an argument and returns the product of `x` and `y`.
3. The `multiplier` function returns the `returnProduct` function.

The `processData` function takes in a number `input` as an argument and uses the `multiplier` function to create three new functions: `waterWeight`, `mercuryWeight`, and `oilWeight`. These functions are created by calling the `multiplier` function with different arguments: 1, 1.355, and 0.900, respectively. The `processData` function then logs the weight of `input` metric cubes of water, mercury, and oil by calling the `waterWeight`, `mercuryWeight`, and `oilWeight` functions with the `input` argument.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(1), because it performs a fixed number of operations regardless of the size of the input.

### `Space Complexity`:
The space complexity is also O(1), because it uses a fixed amount of memory regardless of the size of the input.

## Code:
```js
// Define the multiplier function
function multiplier(x) {
    // Define a returnProduct function that takes in a y argument
    this.returnProduct = function(y){
        // Return the product of x and y
        return x * y;  
    };
    
    // Return the returnProduct function
    return returnProduct;
}

// Define the processData function
function processData(input) {
    // Create waterWeight, mercuryWeight, and oilWeight functions using the multiplier function with different x arguments
    var waterWeight = multiplier(1);
    var mercuryWeight = multiplier(1.355);
    var oilWeight = multiplier(0.900);
    
    // Log the weight of input metric cubes of water, mercury, and oil using the waterWeight, mercuryWeight, and oilWeight functions
    console.log("Weight of " + input + " metric cube of water = " + waterWeight(input) + " kg");
    console.log("Weight of " + input + " metric cube of mercury = " + mercuryWeight(input) + " kg");
    console.log("Weight of " + input + " metric cube of oil = " + oilWeight(input) + " kg");
} 

// Set up standard input
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

// When standard input ends, call the processData function with the input data converted to a number
process.stdin.on("end", function () {
   processData(Number(_input));
});

```

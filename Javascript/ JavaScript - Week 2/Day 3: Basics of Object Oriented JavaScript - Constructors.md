### [Day 3: Basics of Object Oriented JavaScript - Constructors](https://www.hackerrank.com/contests/javascript-week2/challenges/js-constructors)

## Explanation:
The main logic of the code can be explained as follows:
1. The `Car` constructor function takes in three arguments: `name`, `mileage`, and `max_speed`.
2. It sets the `name`, `mileage`, and `max_speed` properties of the `Car` object to the corresponding arguments.

The `processData` function takes in an array of input data and uses it to create a new `Car` object by calling the `Car` constructor function with the first three elements of the input array as arguments. The `processData` function then logs the `name`, `mileage`, and `max_speed` properties of the `Car` object.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(1), because it performs a fixed number of operations regardless of the size of the input.

### `Space Complexity`:
 The space complexity is also O(1), because it uses a fixed amount of memory regardless of the size of the input.


## Code:
```js
// Define the Car constructor function
let Car = function(name, mileage, max_speed){
    // Set the name, mileage, and max_speed properties of the Car object
    this.name = name;
    this.mileage = mileage;
    this.max_speed = max_speed;
};

// Define the processData function
function processData(input) {
    // Create a new Car object using the input data
    var my_car = new Car(input[0], input[1], input[2]) 
    // Log the name, mileage, and max_speed properties of the Car object
    console.log(my_car.name);
    console.log(my_car.mileage);
    console.log(my_car.max_speed);
} 

// Set up standard input
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

// When standard input ends, call the processData function with the input data split into an array
process.stdin.on("end", function () {
   processData(_input.split(" "));
});
```

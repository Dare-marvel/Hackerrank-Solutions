### [Day 5: Inheritance](https://www.hackerrank.com/challenges/js10-inheritance/problem?isFullScreen=true)

## Explanation:
This code defines two classes, `Rectangle` and `Square`, that represent geometric shapes. The `Rectangle` class has a constructor that takes width and height arguments and an `area` method that calculates and returns its area. The `Square` class inherits from the `Rectangle` class and has a constructor that takes a side length argument. It uses this side length to call its parent class's constructor with equal width and height values.

The main logic of this code can be summarized in the following points:

1. The `Rectangle` class is defined with a constructor that takes width and height arguments. These arguments are used to set the `w` and `h` properties of the object.
2. An `area` method is added to the `Rectangle` class's prototype. This method calculates the area of the rectangle by multiplying its width and height properties and returns the result.
3. The `Square` class is defined to inherit from the `Rectangle` class. It has a constructor that takes a side length argument, which it uses to call its parent class's constructor with equal width and height values.
4. The code then checks if the `Square` class's prototype has only a `constructor` property. If it does, it creates new `Rectangle` and `Square` objects, calls their `area` methods, and logs their return values to the console. If it does not, it logs -1 to the console.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(1) because it performs a fixed number of operations that do not depend on the size of the input.

### `Space Complexity`:
The space complexity of this code is O(1) because it uses only constant extra space regardless of input size.

## Code:
```js
// Define a Rectangle class with a constructor that takes width and height arguments
class Rectangle {
    constructor(w, h) {
        // Set the width and height properties of the object
        this.w = w;
        this.h = h;
    }
}

// Add an area method to the Rectangle class's prototype
Rectangle.prototype.area = function(){
    // Calculate and return the area of the rectangle
    return this.w * this.h;
}

// Define a Square class that inherits from the Rectangle class
class Square extends Rectangle{
    // Define a constructor that takes a side length argument
    constructor(s){
        // Call the parent class's constructor with the side length as both the width and height
        super(s,s);
    }
}

/*
 *  Write code that adds an 'area' method to the Rectangle class' prototype
 */

/*
 * Create a Square class that inherits from Rectangle and implement its class constructor
 */

// Check if the Square class's prototype has only a constructor property
if (JSON.stringify(Object.getOwnPropertyNames(Square.prototype)) === JSON.stringify([ 'constructor' ])) {
    // Create a new Rectangle object with width 3 and height 4
    const rec = new Rectangle(3, 4);
    // Create a new Square object with side length 3
    const sqr = new Square(3);
    
    // Log the area of the rectangle and square objects to the console
    console.log(rec.area());
    console.log(sqr.area());
} else {
    // If the Square class's prototype has more than just a constructor property, log -1 to the console
    console.log(-1);
    console.log(-1);
}

```

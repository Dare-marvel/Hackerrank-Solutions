### [Pascal's Triangle](https://www.hackerrank.com/challenges/pascals-triangle/problem?isFullScreen=true)

## Brief Description:

## Key Insights:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```scala
object Solution {

    // Define a method to compute the value of an element in the Pascal's triangle using recursion
    def pas(r: Int, c: Int): Int = {
        // Base case: if c is 0 or r is equal to c, return 1
        if (c == 0 || r == c) {
            return 1
        }
 
        // Recursive case: compute the value of the element using the values of two elements in the previous row
        return pas(r-1, c-1) + pas(r-1, c)
    }

    // Define a method to print the first k rows of the Pascal's triangle
    def pascal(k: Int) = {
        // Loop through the first k rows of the Pascal's triangle
        for (i <- 0 until k) {
            // Loop through the first i+1 elements in the i-th row
            for (j <- 0 to i) {
                // Compute and print the value of the j-th element in the i-th row using the pas method
                print(pas(i, j) + " ")
            }
            // Print a newline character to move to the next row
            println()
        }
    }

    def main(args: Array[String]) {
        // Read an integer k from standard input
        val k = scala.io.StdIn.readInt()
        
        // Call the pascal method with k as argument to print the first k rows of the Pascal's triangle
        pascal(k)
    }
}
```

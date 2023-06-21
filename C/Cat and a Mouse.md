### [Cat And A Mouse](https://www.hackerrank.com/challenges/cats-and-a-mouse/problem)

## Explanation:
The main logic of the code can be summarized in the following points:
1. The `CatandMouse` function takes three integer arguments `x`, `y`, and `z` representing the positions of Cat A, Cat B, and Mouse C respectively.
2. The function calculates the distance between Cat A and the mouse (`distanceA`) and the distance between Cat B and the mouse (`distanceB`) using the `abs` function.
3. The function compares `distanceA` and `distanceB` to determine which cat will catch the mouse first or if the mouse will escape.
4. If `distanceA` is greater than `distanceB`, it means that Cat B is closer to the mouse and will catch it first. The function prints "Cat B" to the standard output.
5. If `distanceA` is less than `distanceB`, it means that Cat A is closer to the mouse and will catch it first. The function prints "Cat A" to the standard output.
6. If `distanceA` is equal to `distanceB`, it means that both cats are equidistant from the mouse and it will escape. The function prints "Mouse C" to the standard output.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(t), where t is the number of test cases. This is because for each test case, the code performs a constant number of operations (calculating distances, comparing them, and printing the result).

### `Space Complexity`:
The space complexity of this code is O(1), because it uses a constant amount of memory (the variables `x`, `y`, `z`, `t`, `distanceA`, and `distanceB`) regardless of the number of test cases.

## Code:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to simulate the game between two cats and a mouse
void CatandMouse(int x, int y, int z)
{
    // Calculate the distance between Cat A and the mouse
    int distanceA = abs(z - x);
    // Calculate the distance between Cat B and the mouse
    int distanceB = abs(z - y);

    // Compare the distances to determine which cat will catch the mouse first
    if (distanceA > distanceB)
    {
        printf("Cat B");
    }
    else if (distanceA < distanceB)
    {
        printf("Cat A");
    }
    else
    {
        printf("Mouse C");
    }
}

int main()
{
    int x, y, z, t;
    
    // Read the number of test cases
    scanf("%d", &t);
    
    // Loop through each test case
    while (t--)
    {
        // Read the positions of Cat A, Cat B, and Mouse C
        scanf("%d %d %d", &x, &y, &z);
        
        // Call the CatandMouse function with the given positions
        CatandMouse(x, y, z);
        
        // Print a newline character after each test case
        printf("\n");
    }

    return 0;
}
```

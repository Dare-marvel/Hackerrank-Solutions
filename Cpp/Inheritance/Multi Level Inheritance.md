### [Multi Level Inheritance](https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem?isFullScreen=false)

## Explanation:
* The code starts by including necessary header files (<cmath>, <cstdio>, <vector>, <iostream>, <algorithm>).
* Three classes are defined: Triangle, Isosceles, and Equilateral, representing different types of triangles.
* The Triangle class has a member function triangle() that prints "I am a triangle" to the console.
* The Isosceles class is derived from the Triangle class using public inheritance. It adds a member function isosceles() that prints "I am an isosceles triangle" to the console.
* The Equilateral class is derived from the Isosceles class using public inheritance. It adds a member function equilateral() that prints "I am an equilateral triangle" to the console.
* The main() function is the entry point of the program.
* Inside main(), an instance of the Equilateral class named eqr is created.
* The equilateral() function is called on the eqr object, printing "I am an equilateral triangle" to the console.
* The isosceles() function is called on the eqr object, printing "I am an isosceles triangle" to the console.
* The triangle() function is called on the eqr object, printing "I am a triangle" to the console.
  
## Code:
```cpp
#include <cmath>        // Includes the math library
#include <cstdio>       // Includes the C standard input/output library
#include <vector>       // Includes the vector container library
#include <iostream>     // Includes the standard input/output stream library
#include <algorithm>    // Includes the algorithm library
using namespace std;    // Using the standard namespace

class Triangle{                 // Define a class named "Triangle"
    public:                     // Public access specifier
        void triangle(){        // Member function "triangle"
            cout<<"I am a triangle\n";   // Prints "I am a triangle" to the console
        }
};

class Isosceles : public Triangle{  // Define a class named "Isosceles" inheriting from "Triangle"
    public:                         // Public access specifier
        void isosceles(){            // Member function "isosceles"
            cout<<"I am an isosceles triangle\n";    // Prints "I am an isosceles triangle" to the console
        }
};

class Equilateral : public Isosceles{   // Define a class named "Equilateral" inheriting from "Isosceles"
    public:                             // Public access specifier
        void equilateral(){             // Member function "equilateral"
            cout<<"I am an equilateral triangle\n";   // Prints "I am an equilateral triangle" to the console
        }
};

int main(){                             // The main function
    Equilateral eqr;                    // Create an instance of the "Equilateral" class named "eqr"
    eqr.equilateral();                  // Call the "equilateral" function on the "eqr" object, printing "I am an equilateral triangle" to the console
    eqr.isosceles();                    // Call the "isosceles" function on the "eqr" object, printing "I am an isosceles triangle" to the console
    eqr.triangle();                     // Call the "triangle" function on the "eqr" object, printing "I am a triangle" to the console
    return 0;                           // Exit the program with a return value of 0, indicating successful execution
}

```

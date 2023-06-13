### [Inheritance Introduction](https://www.hackerrank.com/challenges/inheritance-introduction/problem?isFullScreen=false)

## Explanation:
This is a C++ program that demonstrates inheritance. Here are some key points about the code:

- The program defines two classes: `Triangle` and `Isosceles`.
- The `Triangle` class has a public method named `triangle` that prints the message "I am a triangle" to standard output.
- The `Isosceles` class is derived from the `Triangle` class and inherits its public method.
- The `Isosceles` class also has its own public method named `isosceles` that prints the message "I am an isosceles triangle" to standard output.
- Additionally, the `Isosceles` class has another public method named `description` that prints the message "In an isosceles triangle two sides are equal" to standard output.
- In the `main` function, an object of type `Isosceles` is created and its methods are called in the following order: `isosceles`, `description`, and `triangle`.
- As a result, the following messages are printed to standard output:

```
I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
```

## Code:
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Define a Triangle class
class Triangle{
    public:
        // Declare a public method named triangle that prints a message to standard output
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

// Define an Isosceles class that is derived from the Triangle class
class Isosceles : public Triangle{
    public:
        // Declare a public method named isosceles that prints a message to standard output
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
        // Declare another public method named description that prints a message to standard output
        void description(){
            cout<<"In an isosceles triangle two sides are equal\n";
        }
};

int main(){
    // Create an object of type Isosceles
    Isosceles isc;
    // Call the isosceles method of the isc object
    isc.isosceles();
    // Call the description method of the isc object
    isc.description();
    // Call the triangle method of the isc object (inherited from the Triangle class)
    isc.triangle();
    return 0;
}
```

### [Box It!](https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=false)

## Explanation:
This C++ code defines a `Box` class that represents a box with three dimensions: length (`l`), breadth (`b`), and height (`h`). The class has the following methods and constructors:

- `Box()`: A default constructor that initializes all dimensions to 0.
- `Box(int length, int breadth, int height)`: A parameterized constructor that initializes the dimensions to the given values.
- `Box(const Box& B)`: A copy constructor that initializes the dimensions to the values of the given `Box` object.
- `getLength()`: Returns the length of the box.
- `getBreadth()`: Returns the breadth of the box.
- `getHeight()`: Returns the height of the box.
- `CalculateVolume()`: Calculates and returns the volume of the box as the product of its three dimensions.

The code also overloads two operators for the `Box` class:

- `operator <`: Compares two `Box` objects and returns `true` if the first box is smaller than the second box in at least one dimension (length, breadth, or height).
- `operator <<`: Outputs a `Box` object to an output stream in the format "length breadth height".

The `check2()` function performs a series of operations on `Box` objects based on user input. The function takes an integer `n` as input, representing the number of operations to perform. Then, for each operation, it takes an integer `type` as input and performs one of five possible actions based on its value:

1. If `type == 1`, it outputs a default-initialized `Box` object.
2. If `type == 2`, it takes three integers as input representing the dimensions of a new box, creates a new `Box` object with those dimensions, assigns it to a temporary variable, and outputs it.
3. If `type == 3`, it takes three integers as input representing the dimensions of a new box, creates a new `Box` object with those dimensions, compares it to the temporary variable using the overloaded `<` operator, and outputs "Lesser" or "Greater" depending on whether the new box is smaller or larger than the temporary variable.
4. If `type == 4`, it calculates and outputs the volume of the temporary variable using its `CalculateVolume()` method.
5. If `type == 5`, it creates a new `Box` object by copying the temporary variable using its copy constructor and outputs it.

The `main()` function simply calls the `check2()` function.

Is there anything else you would like to know?


## Code:
```cpp
#include<bits/stdc++.h>

using namespace std;

// Define the Box class
class Box {
private:
    int l, b, h; // Dimensions of the box

public:
    // Constructors
    Box() {
        l = b = h = 0;
    }

    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }

    Box(const Box& B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    // Getters for the dimensions
    int getLength() {
        return l;
    }

    int getBreadth() {
        return b;
    }

    int getHeight() {
        return h;
    }

    // Calculate the volume of the box
    long long CalculateVolume() {
        return ((long long)l * b * h);
    }

    // Overload the less than operator
    friend bool operator < (Box& b1, Box& b2) {
        if ((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) ||
            (b1.l == b2.l && b1.b == b2.b && b1.h < b2.h))
            return true;
        else
            return false;
    }

    // Overload the output stream operator
    friend ostream& operator << (ostream& s, Box& b1) {
        s << b1.l << " " << b1.b << " " << b1.h;
        return s;
    }
};

// Function to perform operations on Box objects
void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            cout << temp << endl;
        }
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            }
            else {
                cout << "Greater\n";
            }
        }
        if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main() {
    check2();
}

```

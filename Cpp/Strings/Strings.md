### [Strings](https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=false)

## Explanation:
This C++ code takes two strings as input from the user and performs the following operations:

* It outputs the size of each string separated by a space.
* It concatenates the two strings and outputs the result.
* It swaps the first characters of the two strings and outputs the modified strings separated by a space.

## Code:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a; // Take the first string as input
    cin >> b; // Take the second string as input

    // Output the size of each string separated by a space
    cout << a.size() << " " << b.size() << endl;

    // Concatenate the two strings and output the result
    cout << a + b << endl;

    // Swap the first characters of the two strings
    // and output the modified strings separated by a space
    cout << b[0] + a.substr(1, a.size() - 1) << " " << a[0] + b.substr(1, b.size() - 1) << endl;

    return 0;
}

```

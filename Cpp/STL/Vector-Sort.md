### [Vector-Sort](https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=false)

## Explanation:
This is a C++ program that reads an integer len from standard input, then reads len more integers and stores them in a vector. The vector is then sorted in ascending order using the sort function from the <algorithm> library. Finally, the sorted vector is printed to standard output.
  
## Code:
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int len; // length of the vector
    cin >> len;
    int a; // temporary variable to store input
    
    vector<int> vec; // declare a vector of integers
    for (int i = 0; i < len; i++) {
        cin >> a; // read an integer from standard input
        vec.push_back(a); // add the integer to the vector
    }
    
    sort(vec.begin(), vec.end()); // sort the vector in ascending order
    
    for (int i = 0; i < len; i++) {
        cout << vec[i] << " "; // print the sorted vector to standard output
    }
    return 0;
}

```

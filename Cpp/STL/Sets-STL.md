### [Sets-STL](https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=false)

## Explanation:
This code is an implementation of a program that performs a series of operations on a set of integers. Here's a brief explanation of how it works:

- The `main` function starts by defining a set `s` to store the integers.
- The function reads an integer `Q` from the standard input, which represents the number of operations to be performed.
- The function then enters a loop that iterates `Q` times. In each iteration, the function reads two integers `y` and `x` from the standard input.
- The value of `y` determines the type of operation to be performed:
    - If `y` is 1, the integer `x` is inserted into the set `s`.
    - If `y` is 2, the integer `x` is erased from the set `s` if it is present in the set.
    - If `y` is 3, the function checks if the integer `x` is present in the set `s`. If it is present, it prints "Yes" to the standard output. Otherwise, it prints "No".
- After all operations have been performed, the function returns 0.

## Code:
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int Q,x,y;
    cin>>Q;
    while(Q--){
        cin>>y>>x;
        switch (y) {
            case 1:
            {
                // Insertion
                s.insert(x);
                break;
            }
            case 2:
            {
                // Deletion
                if (s.find(x) != s.end())
                    s.erase(x);
                break;
            }
            case 3:
            {
                // Checking presence
                if (s.find(x) == s.end())
                    cout<<"No"<<endl;
                else
                    cout<<"Yes"<<endl;
                break;
            }
        }
    }  
    return 0;
}
```

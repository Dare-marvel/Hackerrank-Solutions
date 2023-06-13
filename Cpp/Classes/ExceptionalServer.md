### [Exceptional Server](https://www.hackerrank.com/challenges/exceptional-server/problem?isFullScreen=false)

## Explanation:
This is a C++ program that defines a `Server` class with two public static methods: `compute` and `getLoad`. The `compute` method takes two arguments `A` and `B`, performs some calculations and returns a result. The `getLoad` method returns the value of the private static member variable `load`.
The `main` function reads an integer `T` from standard input, then enters a loop that runs for `T` iterations. In each iteration, it reads two integers `A` and `B` from standard input, then calls the `Server::compute` method with these arguments. The result of this call is printed to standard output.
The call to `Server::compute` is wrapped in a try-catch block that catches several types of exceptions: `std::bad_alloc`, `std::exception`, and any other exception. If an exception is caught, an appropriate message is printed to standard output.
After the loop, the value of `Server::getLoad()` is printed to standard output.
Here are some comments on the code:

1. The program uses several standard library headers: `<iostream>`, `<exception>`, `<string>`, `<stdexcept>`, `<vector>`, and `<cmath>`.
2. The entire `std` namespace is imported with the line `using namespace std;`. This can lead to name conflicts and is generally not recommended.
3. The `Server` class has a private static member variable named `load`. This variable is initialized to 0 and is incremented every time the `compute` method is called.
4. The `compute` method performs several calculations and checks. If `A` is negative, it throws an exception of type `std::invalid_argument`. If `B` is 0, it throws an exception of type int with value 0.
5. The method also creates a vector of size A with all elements initialized to 0. It then calculates two values: `real` and `ans`. If B is a valid index into the vector, the value of the element at that index is assigned to ans. Otherwise, an exception of type std::out_of_range will be thrown by the vector's at() method.
6. Finally, the method returns the sum of real, A, and the negation of B times ans.
7. In the main function's try-catch block, different types of exceptions are caught and handled appropriately. If a std::bad_alloc exception is caught, it means that memory allocation failed (e.g., when creating the vector in the compute method). If a std::exception is caught, its what() method is called to get a description of the error. If any other type of exception is caught (indicated by catch(...)), a generic message is printed.
8. After the loop in main(), the value returned by Server::getLoad() (which should be equal to T) is printed to standard output.
9. 
## Code:
```cpp
#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

// Define a Server class
class Server {
private:
    // Declare a private static member variable named load
    static int load;
public:
    // Declare a public static method named compute that takes two arguments
    static int compute(long long A, long long B) {
        // Increment the load variable
        load += 1;
        // If A is negative, throw an exception of type std::invalid_argument
        if(A < 0) {
            throw std::invalid_argument("A is negative");
        }
        // Create a vector of size A with all elements initialized to 0
        vector<int> v(A, 0);
        int real = -1, cmplx = sqrt(-1);
        // If B is 0, throw an exception of type int with value 0
        if(B == 0) throw 0;
        real = (A/B)*real;
        // If B is a valid index into the vector, assign the value of the element at that index to ans
        int ans = v.at(B);
        // Return the sum of real, A, and the negation of B times ans
        return real + A - B*ans;
    }
    // Declare a public static method named getLoad that returns the value of the load variable
    static int getLoad() {
        return load;
    }
};
// Initialize the load variable to 0
int Server::load = 0;

int main() {
    // Read an integer T from standard input
    int T; cin >> T;
    // Enter a loop that runs for T iterations
    while(T--) {
        long long A, B;
        // Read two integers A and B from standard input
        cin >> A >> B;
        try{
            // Call the Server::compute method with arguments A and B and assign the result to res
            long long res = Server::compute(A, B);
            // Print res to standard output
            cout<<res<<endl;
        }
        catch (std::bad_alloc&) {
            cout<<"Not enough memory"<<endl;
        }
        catch(const std::exception & e){
            cout<<"Exception: "<< e.what() << std::endl;
        }
        catch(...){
            cout<<"Other Exception"<<endl;
        }

    }
    // Print the value returned by Server::getLoad() to standard output
    cout << Server::getLoad() << endl;
    return 0;
}

```

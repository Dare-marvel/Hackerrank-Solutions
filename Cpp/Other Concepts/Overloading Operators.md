### [Overloading Operators](https://www.hackerrank.com/challenges/overload-operators/problem?isFullScreen=false)

## Explanation: 
This code is an implementation of a program that performs addition on complex numbers using operator overloading. Here's a brief explanation of how it works:

- The `Complex` class is defined to represent a complex number with two integer data members `a` and `b`, representing the real and imaginary parts of the complex number, respectively.
- The `input` function is a member function of the `Complex` class that takes a string as an argument and parses it to extract the real and imaginary parts of the complex number. The extracted values are stored in the data members `a` and `b`.
- The `+` operator is overloaded for the `Complex` class to perform addition on two complex numbers. The overloaded function takes two `Complex` objects as arguments and returns a new `Complex` object whose real and imaginary parts are the sum of the real and imaginary parts of the input objects, respectively.
- The `<<` operator is also overloaded for the `Complex` class to print a complex number in the format "a+ib". The overloaded function takes an output stream object and a `Complex` object as arguments and outputs the value of the complex number to the output stream.
- The `main` function starts by defining two `Complex` objects `x` and `y`, and two strings `s1` and `s2`.
- The function reads two strings from the standard input and stores them in `s1` and `s2`, respectively.
- The function calls the `input` function on the objects `x` and `y` with arguments `s1` and `s2`, respectively, to parse the input strings and initialize the values of the complex numbers.
- The function then adds the two complex numbers using the overloaded `+` operator and stores the result in a new `Complex` object `z`.
- Finally, the function prints the value of the result using the overloaded `<<` operator.


Is there anything else you would like to know?
## Code:
```cpp
#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        // Parsing the input string to extract real and imaginary parts
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};


// Overload operators + and << for the class Complex
// + should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
// << should print a complex number in the format "a+ib"

Complex operator+(Complex &x, Complex &y){
    // Adding the real and imaginary parts separately
    Complex res;
    res.a = x.a + y.a;
    res.b = x.b + y.b;
    return res;
}

std::ostream& operator<<(std::ostream& os, const Complex &obj) {
    // Outputting the complex number in the format "a+ib"
    os << obj.a << "+i" << obj.b << endl;
    return os;
}

int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}

```

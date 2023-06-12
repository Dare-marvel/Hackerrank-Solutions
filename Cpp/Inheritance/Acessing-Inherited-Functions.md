### [Acessing Inherited Functions](https://www.hackerrank.com/challenges/accessing-inherited-functions/problem?isFullScreen=false)

## Explanation:
Explanation of the update_val() function:
* The function starts by declaring a variable called curr_val and initializing it to the value of the input integer.
* The function then enters a loop that repeats as long as curr_val is divisible by 2. Inside the loop, the function divides curr_val by 2, calls the func() function in class A, and increments a counter called callA.
* The function then enters a loop that repeats as long as curr_val is divisible by 3. Inside the loop, the function divides curr_val by 3, calls the func() function in class B, and increments a counter called callB.
* The function then enters a loop that repeats as long as curr_val is divisible by 5. Inside the loop, the function divides curr_val by 5, calls the func() function in class C, and increments a counter called callC.
* The function then returns.

## Code:
```cpp
#include<iostream>
using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }
    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : public A, public B, public C
{
    int val;
    public:
        // Initially val is 1
        D()
        {
            val = 1;
        }

        // Implement this function
        void update_val(int new_val)
        {
            int curr_val = new_val;

            // Reduce curr_val by dividing it by 2 and incrementing A's call count
            while(curr_val % 2 == 0){
                curr_val /= 2;
                A::func(val);
            }

            // Reduce curr_val by dividing it by 3 and incrementing B's call count
            while(curr_val % 3 == 0){
                curr_val /= 3;
                B::func(val);
            }

            // Reduce curr_val by dividing it by 5 and incrementing C's call count
            while(curr_val % 5 == 0){
                curr_val /= 5;
                C::func(val);
            }
        }

        // For Checking Purpose
        void check(int); // Do not delete this line.
};

void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}

int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}

```

### [Classes and Objects](https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=false)

## Explanation:
This C++ code defines a `Student` class that has two public methods: `input()` and `calculateTotalScore()`. The `input()` method takes 5 integer inputs from the user and stores them in the `scores` array. The `calculateTotalScore()` method calculates the sum of the scores in the `scores` array and returns it.

In the `main()` function:
1. The number of students is taken as input from the user and stored in the variable `n`.
2. An array of `n` `Student` objects is created using dynamic memory allocation.
3. The `input()` method is called for each student to take their scores as input.
4. Kristen's score is calculated by calling the `calculateTotalScore()` method for the first student object.
5. A loop is run from 1 to `n-1` to calculate the total score of each student and compare it with Kristen's score. If a student's total score is greater than Kristen's score, the count variable is incremented.
6. The final value of count, which represents the number of students who scored higher than Kristen, is printed.

Is there anything else you would like to know?

## Code:
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    public:
        int scores[5];  // Array to store scores of the student

        // Function to input the scores for the student
        void input();

        // Function to calculate the total score of the student
        int calculateTotalScore(); 
}; 

void Student :: input(){
        int sc;
        for(int i=0;i<5;i++){
            cin>>sc;
            scores[i] = sc;
        }
}

int Student :: calculateTotalScore(){
    int sum=0;
    for(int i=0;i<5;i++){
        sum += scores[i];
    }
    return sum;
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    // Input scores for each student
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // Calculate Kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // Determine how many students scored higher than Kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // Print the result
    cout << count;

    return 0;
}

```

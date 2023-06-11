### [Virtual Functions](https://www.hackerrank.com/challenges/virtual-functions/problem)

## Explanation:
This C++ code does the following:
- Defines a `Person` class with `name`, `age`, `getdata()` and `putdata()` members.
- Defines a `Professor` class that inherits from the `Person` class and adds `publications`, `cur_id`, and a static `id` member. The `getdata()` and `putdata()` methods are overridden to handle the additional data.
- Defines a `Student` class that also inherits from the `Person` class and adds an array of 6 integers called `marks`, a `cur_id`, and a static `id` member. The `getdata()` and `putdata()` methods are also overridden to handle the additional data.
- In the main function, the program takes an integer input `n` representing the number of objects to be created.
- An array of pointers to `Person` objects is created with size `n`.
- For each object, an integer input is taken representing the type of object to be created (1 for Professor, 2 for Student).
- The appropriate object is created using the `new` keyword and its address is stored in the array of pointers.
- The program then calls the `getdata()` method for each object to take input from the user.
- Finally, the program calls the `putdata()` method for each object to print out the required output.

## Code:
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void getdata() {};  // Virtual function to get data (to be overridden by derived classes)
    virtual void putdata() {};  // Virtual function to display data (to be overridden by derived classes)
};

class Professor : public Person {
public:
    int publications;
    int cur_id;
    static int id;

    Professor() {
        this->cur_id = ++id;
    }

    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id = 0;

class Student : public Person {
public:
    int marks[6];
    int cur_id;
    static int id;

    Student() {
        this->cur_id = ++id;
    }

    void getdata() {
        cin >> this->name >> this->age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() {
        int mk_sum = 0;
        for (int i = 0; i < 6; i++) {
            mk_sum += marks[i];
        }
        cout << name << " " << age << " " << mk_sum << " " << cur_id << endl;
    }
};

int Student::id = 0;

int main() {
    int n, val;
    cin >> n;  // The number of objects that are going to be created.
    Person* per[n];

    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == 1) {
            // If val is 1, the current object is of type Professor
            per[i] = new Professor;
        }
        else {
            // Else the current object is of type Student
            per[i] = new Student;
        }
        per[i]->getdata();  // Get the data from the user.
    }

    for (int i = 0; i < n; i++) {
        per[i]->putdata();  // Print the required output for each object.
    }

    return 0;
}

```

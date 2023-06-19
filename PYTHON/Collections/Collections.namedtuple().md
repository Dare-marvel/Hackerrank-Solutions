### [Collections.namedtuple()](https://www.hackerrank.com/challenges/py-collections-namedtuple/problem?isFullScreen=false)

## Key Insights:
The `*` operator is used to unpack the elements of a list or tuple. In this case, `input().split()` reads a line of input and splits it into a list of strings. The `*` operator then unpacks the elements of this list and passes them as separate arguments to the `Student` constructor.
For example, if the headers are `"ID NAME MARKS"`, the `Student` namedtuple will have 3 fields: `ID`, `NAME`, and `MARKS`. When creating a `Student` object, you need to pass 3 arguments to the constructor, one for each field. If the input is `"1 John 90"`, `input().split()` will return the list `["1", "John", "90"]`. The `*` operator then unpacks this list into 3 separate arguments and passes them to the `Student` constructor as `Student("1", "John", "90")`.

## Explanation:
This code calculates the average of the marks of a group of students. Here is the main logic of the code:

1. The code reads the number of students and the headers of the data.
2. The code creates a namedtuple called Student with the headers as fields. This namedtuple will be used to store the data for each student.
3. The code initializes an empty list to store the Student objects.
4. The code then loops through each student and reads the data for the student. It creates a Student object using the data and appends it to the StudentsList.
5. After reading the data for all students, the code calculates the average of the marks of all students by mapping each Student object in StudentsList to its MARKS field, converting it to float, and calculating the sum of all marks. It then divides this sum by the number of students to get the average and prints it.
 
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) where n is the number of students since it loops through each student once.

### `Space Complexity`:
The space complexity is also O(n) since it stores a list with n Student objects.

## Code:
```py
from collections import namedtuple

# Read the number of students
N = int(input())

# Read the headers of the data
headers = input()

# Create a namedtuple called Student with the headers as fields
Student = namedtuple('Student',headers)

# Initialize an empty list to store the Student objects
StudentsList = []

# Loop through each student
for i in range(N):
    # Read the data for the student and create a Student object using the data
    StudentsList.append(Student(*input().split()))

# Calculate the average of the marks of all students and print it
print(sum(list(map(lambda x:float(x.MARKS),StudentsList))) / len(StudentsList))

```

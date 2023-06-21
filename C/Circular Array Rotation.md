### [Circular Array Rotation](https://www.hackerrank.com/challenges/circular-array-rotation/problem?h_r=profile)

## Optimal Solution : Running all test-cases

<hr>

## Explanation
The main logic of the code can be summarized in the following points:
1. The code reads three integers `n`, `k`, and `qn` representing the number of elements in the array, the number of times the array is rotated to the right, and the number of queries respectively.
2. The code then reads `n` integers representing the elements of the array and stores them in an integer array `num`.
3. The code then reads `qn` integers representing the queries and stores them in an integer array `q`.
4. For each query `q[i]`, the code calculates the index of the element that will be at position `q[i]` after rotating the array `k` times to the right.
5. This is done by subtracting `k % n` from `q[i]`. If this value is non-negative, it is used as the index to access the element in the `num` array. Otherwise, `n` is added to this value to account for wrap-around.
6. The element at this calculated index is then printed to the standard output.


## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n + qn), where n is the number of elements in the array and qn is the number of queries. This is because for each element in the array and for each query, the code performs a constant number of operations (reading input and calculating/printing results).

### `Space Complexity`:
The space complexity of this code is O(n + qn), because it uses two arrays (`num` and `q`) with sizes proportional to n and qn respectively.

## Code:
```c
#include <stdio.h>

int main()
{
    int n, k, qn; // Variables for the number of elements, rotation count, and number of queries
    
    scanf("%d", &n); // Inputting the number of elements
  
    int num[n]; // Array to store the elements
    
    scanf("%d", &k); // Inputting the rotation count
    
    scanf("%d", &qn); // Inputting the number of queries
  
    int q[qn]; // Array to store the queries
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]); // Inputting the elements of the array
    }
  
    for (int i = 0; i < qn; i++)
    {
        scanf("%d", &q[i]); // Inputting the queries
    }
    for (int i = 0; i < qn; i++)
    {
        if (q[i] - k % n >= 0)
        {
            printf("%d\n", num[q[i] - (k % n)]); // Printing the elements after rotation
        }
        else
            printf("%d\n", num[q[i] - (k % n) + n]); // Printing the elements after rotation, considering wrap-around
    }
    return 0;
}
```

<hr>

## Brute Force : Time Consuming approach ( Giving Time limit exceeded error )

## Explanation

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>

int main()
{
    int n,k,qn;
    // Input the number of elements
    scanf("%d",&n);
    int num[n];
    // Input the rotation count
    scanf("%d",&k);
    // Input the number of queries
    scanf("%d",&qn);
    int q[qn];
    // Input the elements of the array
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    // Input the queries
    for(int i=0;i<qn;i++){
        scanf("%d",&q[i]);
    }

    // Perform rotation k times
    for(int j=0;j<k;j++){
        int temp=num[n-1];
        for(int i=0;i<n;i++){
            num[n-i-1]=num[n-i-2];
        }
        num[0]=temp;
    }

    // Print the final answers
    for(int i=0;i<qn;i++){
        printf("%d\n",num[q[i]]);
    }

    return 0;
}
```
---------------------------------------------------------------------------------------------------------------------------------------



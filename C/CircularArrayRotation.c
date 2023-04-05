// Link : https://www.hackerrank.com/challenges/circular-array-rotation/problem?h_r=profile

// Brute Force : Time Consuming approach ( Giving Time limit exceeded error )
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


// ---------------------------------------------------------------------------------------------------------------------------------------

// Optimal Solution : Running all test-cases
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


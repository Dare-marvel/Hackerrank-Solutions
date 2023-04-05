// Link : https://www.hackerrank.com/challenges/equality-in-a-array/problem?h_r=profile

#include <stdio.h>

int main(){
    int n;
    // Read the value of n
    scanf("%d", &n);

    int arr[n];
    int arr2[100]={0};

    // Read the elements of the array and keep track of their frequencies
    for(int i=0; i<n; ++i){
        scanf("%d", &arr[i]);
        ++arr2[(arr[i]-1)];
    }

    int max=0;

    // Find the frequency of the most common element
    for(int i=0; i<100; ++i){
        if(arr2[i]>max)
            max = arr2[i];
    }

    // Print the number of elements that need to be removed to make all elements equal
    printf("%d", n-max);

    return 0;
}

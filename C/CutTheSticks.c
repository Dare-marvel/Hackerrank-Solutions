// Link to the problem : https://www.hackerrank.com/challenges/cut-the-sticks/problem

// Method - 1

#include<stdio.h>

// function to find the minimum element in an array
int min(int arr[],int n){
    int min=1000; // initialize min to a large value
    for(int i=0;i<n;i++){
        if(min>arr[i] && arr[i]!=0){ // check if element is smaller than min and not equal to zero
            min=arr[i]; // set min to the current element
        }
    }
    return min; // return the minimum element
}

// function to find the maximum element in an array
int max(int arr[],int n){
    int max=0; // initialize max to zero
    for(int i=0;i<n;i++){
        if(max<arr[i]){ // check if element is larger than max
            max=arr[i]; // set max to the current element
        }
    }
    return max; // return the maximum element
}

int main(){
    int n;
    // printf("Input n:\n");
    scanf("%d",&n); // read the value of n
    int arr[n];
    // printf("Input elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // read the elements of the array
    }

    int minimum,maximum,count=0;

    while(1){
        minimum=min(arr,n); // find the minimum element in the array
        if(max(arr,n)==0){ // if all elements are zero, exit the loop
            break;
        }
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]-minimum>=0){ // subtract the minimum element from all elements greater than or equal to it
                arr[j]=arr[j]-minimum;
                count++; // increment count for each element modified
            }
        }
        printf("%d\n",count); // print the count for each iteration
    }
    
    return 0;

}

// ---------------------------------------------------------------------------------------------------------------------------------------

// Method - 2

#include <stdio.h>

// function to find the minimum element in an array
int min(int arr[], int n) {
    int min = 1000; // initialize to a large value
    for(int i = 0; i < n; i++) {
        if(arr[i] < min && arr[i] > 0) { // ignore zero and negative values
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k = n; // initialize count of non-zero elements
    for( ; k; ) { // loop until k is zero
        printf("%d\n", k); // print the count
        int minimum = min(arr, n); // find the minimum non-zero element
        for(int i = 0; i < n; i++) {
            arr[i] -= minimum; // subtract the minimum from all elements
            if(!arr[i]) { // if an element becomes zero, decrement k
                --k;
            }
        }
    }

    return 0;
}

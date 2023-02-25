// Link to the problem : https://www.hackerrank.com/challenges/cut-the-sticks/problem

#include<stdio.h>

int min(int arr[],int n){
    int min=1000;
    for(int i=0;i<n;i++){
        if(min>arr[i] && arr[i]!=0){
            min=arr[i];
        }
    }
    return min;
}

int max(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    // printf("Input n:\n");
    scanf("%d",&n);
    int arr[n];
    // printf("Input elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int minimum,maximum,count=0;

    while(1){
        minimum=min(arr,n);
        if(max(arr,n)==0){
            break;
        }
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]-minimum>=0){
                arr[j]=arr[j]-minimum;
                count++;
            }
        }
        printf("%d\n",count);
    }
    
    return 0;

}

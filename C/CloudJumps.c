#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int n;
//printf("Enter the length of array:");
scanf("%d",&n);
int arr[n];
///printf("Enter the elements of the array:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int j=0,jmp=0;
while(j<n-3){
    if((arr[j]==arr[j+1]) && (arr[j]!=arr[j+2])) {
                // printf("cond 2\n");
                // printf("%d\n",j + 1);
                j = j + 1;
                jmp++;
            }
            if(arr[j]==arr[j+2]){
                // printf("cond 1\n");
                // printf("%d\n",j + 2);
                j=j+2;
                jmp++;
            }
            if(j==n-1)
            break;
}
//printf("Jumps\n");
printf("%d",jmp);
return 0;
}
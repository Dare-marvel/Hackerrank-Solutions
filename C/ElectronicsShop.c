#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int b,k,u,i=0,j;
// printf("Enter the budget, number of keyboards and number of USB Drives:\n");
 scanf("%d %d %d",&b,&k,&u);
 int key[1000],usb[1000];
//printf("Enter the prices of keyboards:");
while(i<k){
    scanf("%d",&key[i]);
    i++;
}
i=0;
//printf("Enter the prices of USB Drives:");
while(i<u){
    scanf("%d",&usb[i]);
    i++;
}
i=0;
j=0;
int max=-1;
while(i<k){
    while(j<u){
            if((key[i]+ usb[j]<=b) && (key[i]+usb[j]>max)){
                    max=key[i]+usb[j];
                    //printf("%d\n",max);
                j++;
                i++;
            }
            j++;
    }
    i++;
}
//printf("Final value of max:");
printf("%d",max);
return 0;
}
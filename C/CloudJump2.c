//Successfully executed

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int jump_set(int n,int k){
        if(n==k){
            return 1;
        }
        else if((n-1)%k!=0 && k<=n/2){
            return (n-1)/k +1;
        }
        else if(((n-1)%k ==0 && k<=n/2) || k>n/2){
            return n;
        }
        return 0;
}
int main()
{
int e=100,jmp=0,n,k;
//printf("Enter the value of n:\n");
scanf("%d",&n);

//printf("Enter the value of k:\n");
scanf("%d",&k);

int arr[n];

//printf("Enter the elements of the array:\n");
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

jmp=jump_set(n,k);

//printf("Jump:%d\n",jmp);

int i=(i+k)%n,c=0;
while(c<jmp){
    if(arr[i]==1){   
        //printf("Value of i:%d\n",i);
        e=e-3;
        //printf("Energy now:%d\n",e);
        c++;
        i=(i+k)%n;        
    }
    else{
        //printf("Value of i:%d\n",i);   
        e--; 
        //printf("Energy now:%d\n",e);   
        c++;
        i=(i+k)%n;
    }
}

//printf("Energy:%d\n",e);
printf("%d\n",e);
return 0;
}
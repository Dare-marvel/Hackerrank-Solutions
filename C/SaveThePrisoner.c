#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
//printf("Enter the number of testcases:\n");
scanf("%d",&t);
while(t--){
    long p,s,st;
//printf("Enter the number of prisoners:\n");
scanf("%ld",&p);
//printf("Enter the number of sweets:\n");
scanf("%ld",&s);
//printf("Enter the number of prisoners:\n");
scanf("%ld",&st);

printf("%d\n",(s+st-2)%p+1);

return 0;
}
}
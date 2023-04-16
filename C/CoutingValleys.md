## [Counting Valleys](https://www.hackerrank.com/challenges/counting-valleys/problem)

## Code:
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

int n,level=0,val=0,alt=0,i;

// Taking input the value of n
scanf("%d",&n);
char str[n];
// Taking the string as input
scanf("%s",str);
for(i=0;i<n;i++){
    if(str[i]=='U' && (level ==0 || level ==1)){
        alt+=1;
        if(alt==0){
            level=0;
        }
        if(alt>0){
            level=1;
        }
    }
    if(str[i]=='D'){
        alt-=1;
        if(alt==0){
            level=0;
        }
        if(alt>0){
            level=1;
        }
        if(alt<0){
            level=-1;
        }
    }
    if(str[i]=='U' && level<0){
        alt+=1;
        if(alt==0){
            level=0;
            val++;
        }
        if(alt>0){
            level=1;
        }
        if(alt<0){
            level=-1;
        }
    }
}
// Printing the number of valleys
printf("%d",val);
return 0;
}
```

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

int n,level=0,val=0,alt=0,i;

printf("Enter the value of n\n");
scanf("%d",&n);
char str[n];
printf("Enter the string:\n");
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
printf("Number of valleys:");
printf("%d",val);
return 0;
}
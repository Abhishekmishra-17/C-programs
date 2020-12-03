/*correct upto 12 because of memory..*/
#include<stdio.h>
void main()
{
long int n,c=1,p;
clrscr();
printf("Enter the number want to be factorial..");
scanf("%ld",&n);
p=n;
if(n<0)
{
printf("Please enter valid number...Your input may be string type or negative number...");
}
else{
if(n==0 || n==1){
printf("The factorial of %ld is 1",n);
}
else{
if(n>1){
while(n!=1)
{c=c*n;
n=n-1;
}
printf("The factorial of %ld is %ld",p,c);
}
}
 }
 getch();
}
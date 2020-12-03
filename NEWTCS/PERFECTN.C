#include<stdio.h>
void main()
{
int a=0,i,n;
clrscr();
printf("Enter the number want to be checked either perfect or not\t");
scanf("%d",&n);
if(n<=0){
printf("Enter the valid input."); /*It may also occur when size of input is exceed than 'int' size*/
}
else{
printf("The factor of %d is..",n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
printf("%d\t",i);
a=a+i;
}
}
if(a==n)
{
printf("the given number %d is perfect number",n);
}
else{
printf("the given number %d is not perfect number",n);
}
}
getch();
}
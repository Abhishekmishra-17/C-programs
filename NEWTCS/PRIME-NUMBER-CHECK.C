#include<stdio.h>
void main()
{
int a,c=2,count=0,i;
clrscr();
printf("Enter the number want to be checked either prime or not\t");
scanf("%d",&a);
if(a<=1)
{
printf("Invalid input");
}
else{
for(i=1;i<=a;i++){
if(a%i==0)
{
count=count+1;
}
}
if(count==2)
{
printf("the number %d is prime number",a);
}
else{
printf("the number %d is not a prime number",a);
}}
getch();
}
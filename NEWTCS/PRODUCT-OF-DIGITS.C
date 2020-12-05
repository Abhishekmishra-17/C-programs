#include<stdio.h>
void main()
{
int a,c=1,k;
clrscr();
printf("Enter the positive number \t");
scanf("%d",&a);
if(a==0)
{
printf("The product of digits of given number is 0");
}
else{
while(a!=0)
{
k=a%10;
a=a/10;
c=c*k;
}
printf("The product of digits of given number is %d",c);
}
getch();
}
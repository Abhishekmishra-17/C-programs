#include<stdio.h>
void main()
{
int a,c=1,k,d=0,b;
clrscr();
printf("Enter the positive number \t");
scanf("%d",&a);
b=a;
if(a>0)
{
while(a>0)
{
k=a%10;
c=c*k;
d=d+k;
a=a/10;
}
if(d==c)
{
printf("The given number %d is spy number",b);
}
else{
printf("The given number %d is not spy number",b);
}
}
else{
printf("Invalid input");
}
getch();
}
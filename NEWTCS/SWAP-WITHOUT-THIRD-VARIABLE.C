#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the 1st number\t");
scanf("%d",&a);
printf("Enter the second number\t");
scanf("%d",&b);
printf("The number before swapping is %d and %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("The number after swapping is %d and %d\n",a,b);
getch();
}
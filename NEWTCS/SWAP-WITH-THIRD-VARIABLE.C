#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the 1st number\t");
scanf("%d",&a);
printf("Enter the 2nd number\t");
scanf("%d",&b);
printf("Number before swapping is %d and %d\n",a,b);
c=a;
a=b;
b=c;
printf("Number after swapping is %d and %d",a,b);
getch();
}

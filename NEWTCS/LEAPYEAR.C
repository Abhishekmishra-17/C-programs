#include<stdio.h>
void main()
{
int a;
clrscr();
printf("Enter the year which is want to be checked either leap year or not\t");
scanf("%d",&a);
if(a<1) {
printf("year should be in positive number");
}
else{
if(a%100==0)
{
if(a%400==0)
{
printf("The given year %d is leap year",a);
}
else{
printf("The given year %d is not leap year",a);
}
}
else{
if(a%4==0)
{
printf("The given year %d is leap year",a);
}
else{
printf("The given year %d is not leap year",a);
}
}
}
getch();
}
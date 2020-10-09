#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter the temperature in fahrenheit");
scanf("%f",&f);
c=(f-32.0)*(5.0/9.0);
printf("The temperature in celsius is %f",c);
getch();
 }
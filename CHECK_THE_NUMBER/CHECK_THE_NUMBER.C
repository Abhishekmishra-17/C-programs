#include<stdio.h>
void main()
{
float n;
clrscr();
printf("Enter the number to be determined either it is negative,positive or zero..");
scanf("%f",&n);
if(n==0.0){
printf("The given number is zero");
}
else{
if(n>0.0){
printf("The given number is positive");
}
else{
printf("The given number is negative");
}
}
getch();
}
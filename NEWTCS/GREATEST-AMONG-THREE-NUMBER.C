#include<stdio.h>
void main()
{
float a,b,c;
clrscr();
printf("Enter the first number");
scanf("%f",&a);
printf("Enter the second number");
scanf("%f",&b);
printf("Enter the third number");
scanf("%f",&c);
if(a>b){
if(a>c){
printf("The greatest number is %f",a);
}
else{
printf("The greatest number is %f",c);
}
}
else{
if(b>c){
printf("The greatest number is %f",b);
}
else{
printf("The greatest number is %f",c);
}
}
getch();
}
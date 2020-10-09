#include<stdio.h>
void main()
{
int n;
clrscr();
printf("Enter the number which want to  checked either it is even or odd..");
scanf("%d",&n);
if(n%2==0){
printf("The given number %d is even",n) ;
}
else{
printf("The given number %d is odd",n) ;
}
getch();
}

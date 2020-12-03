#include<stdio.h>
void main()
{
int n,x=2;
clrscr();
printf("Enter the number want to be prime factors...");
scanf("%d",&n);
if(n<=1){
printf("Enter the valid input.."); /*It may also occur when input is exceed from the size of 'int'*/
}
else{
printf("The prime factors of %d is\t",n);
do{
if(n%x==0){
printf("%d\t",x);
n/=x;
}
else{
x++;
}
}
while(x<=n);
}
getch();
}
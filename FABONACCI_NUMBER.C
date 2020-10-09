/*the terms are started from 0th position .i.e. for upto 4th term we get five numbers of this series.*/
#include<stdio.h>
void main()
{
int n,count=2,c,a=0,b=1;
clrscr();
printf("Enter the number of term (started from 0th term)..");
scanf("%d",&n);
if(n<0){
printf("Invalid input please gives a valid positive number including zero..");
}else{
printf("The Fibonacci series upto %dth term is..\t",n);
if(n==0){
printf("%d\t",a);
}
else{
if(n==1){
printf("%d\t%d\t",a,b);
}
else{
printf("%d\t%d\t",a,b);
while(count<=n){
c=a+b;
printf("%d\t",c);
a=b;
b=c;
count=count+1;
}
}
}
}
getch();
}
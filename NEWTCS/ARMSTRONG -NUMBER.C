#include<stdio.h>
#include<math.h>
void main()
{
int a,count=0,b,k;
clrscr();
printf("Enter the number which want to be checked either armstrong or not\t");
scanf("%d",&a);
b=a;
if(a==0)
{
if(b==pow(a,3))
{
printf("The given number %d is armstrong number",b);
}
}
else{
while(a>0)
{
k=a%10;
count=count+pow(k,3);
a=a/10;
}
printf("%d",count);
if(count==b)
{
printf("The given number %d is armtrong number",b);
}
else{
printf("The given number %d is not armstrong number",b);
}
}
getch();
}
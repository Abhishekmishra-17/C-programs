#include<stdio.h>
void main()
{
int a,b,c,k=0;
clrscr();
printf("Enter the number want to be checked\t");
scanf("%d",&a);
b=a;
while(b!=0)
{
c=b%10;
b=b/10;
k=k*10+c;
}
if(a==k)
{
printf("The given number %d is palindrome number",a);
}
else{
printf("The given number %d is not palindrome number",a);
}
getch();
}


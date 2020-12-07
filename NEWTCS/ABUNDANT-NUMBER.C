#include<stdio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("Enter the number want to be checked either abundant number\t..");
scanf("%d",&n);
if(n<=0){
printf("Enter the valid input."); /*It may also occur when size of input is exceed than 'int' size*/
}
else{
for(i=1;i<n;i++)
{
if(n%i==0)
{
c=c+i;
}
}
if(n<c)
{
printf("The given number %d is abundant number",n);
}
else{
printf("The given number %d is not abundant number",n);
}
}
getch();
}
/*correct upto 12 because of memory..*/
#include<stdio.h>
long int fact(long int n)
{
long int c=1;
if(n==0 || n==1){
c=1;
}
else{
while(n!=1)
{
c=c*n;
n=n-1;
}
}
return c;
}
void main()
{
long int n,c=0,p,s;
clrscr();
printf("Enter the number want to be checked either strong number or not\t");
scanf("%ld",&n);
p=n;
while(n>0)
{
s=fact(n%10);
n=n/10;
c=c+s;
}
if(c==p)
{
printf("The given number %ld is strong number",p);
}
else{
printf("The given number %ld is not strong number",p);
}
getch();
}
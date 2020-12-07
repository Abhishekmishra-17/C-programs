#include<stdio.h>
void main()
{
long int b,a,s,flag=1;
clrscr();
printf("Enter the number which want to be checked eithewr it is automorphic or not\t");
scanf("%ld",&a);
b=a;
s=a*a;
printf("%ld",s);
while(a>0)
{
if(s%10!=a%10)
{
flag=0;
}
s=s/10;
a=a/10;
}
if(flag==0){
printf("The given number %ld is not automorphic number",b);
}
else{
printf("The given number %ld is automorphic number",b);
}
getch();
}
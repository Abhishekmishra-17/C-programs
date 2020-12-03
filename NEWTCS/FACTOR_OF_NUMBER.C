#include<stdio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the number want to be factors..");
scanf("%d",&n);
if(n<=0){
printf("Enter the valid input."); /*It may also occur when size of input is exceed than 'int' size*/
}
else{
printf("The factor of %d is..",n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\t",i);
}
}
}
getch();
}
#include<stdio.h>
void main()
{
int a[100],max,i,n;
clrscr();
printf("Enter the number of element \t");
scanf("%d",&n);
printf("Enter the elements\t");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("The maximum number in given numbers is %d",max);
getch();
}
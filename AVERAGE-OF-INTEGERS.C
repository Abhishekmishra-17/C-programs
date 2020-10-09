#include<stdio.h>
void main()
{
int i,n;
float a[100],s=0.0;
clrscr();
printf("How many integers are there?");
scanf("%d",&n);
printf("Enter the numbers... ");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
s=s+a[i];
}
s=s/n;
printf("The average of %d intergers is %f",n,s);
getch();
}


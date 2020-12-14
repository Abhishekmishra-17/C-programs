#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,item,i,j=0;
clrscr();
printf("Enter the size of array\t");
scanf("%d",&n);
printf("Enter the element of array\t");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the item which you want to be search\t");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(item==arr[i])
{
j=i+1;
break;
}
}
if(j!=0)
{
printf("The position of require element is %d",j);
}
else{
printf("Element not found");
}
getch();
}
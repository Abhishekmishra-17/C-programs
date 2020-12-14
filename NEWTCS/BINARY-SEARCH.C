#include<stdio.h>
#include<conio.h>
int binarysearch(int arr[10],int beg,int end,int item)
{
int mid;
if(end>=beg)
{
mid=(beg+end)/2;
if(arr[mid]==item)
{
return mid;
}
else if(arr[mid]>item)
{
return binarysearch(arr,beg,mid-1,item);
}
else{
return binarysearch(arr,mid+1,end,item);
}
}
return -1;
}
void main()
{
int arr[10],beg=0,end,n,item,i,index;
clrscr();
printf("Enter the size of array\t");
scanf("%d",&n);
end=n-1;
printf("Enter the elelments of arrray\t");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the item which you want to be search\t");
scanf("%d",&item);
index=binarysearch(arr,beg,end,item);
if(index!=-1)
{
printf("The location of require element is %d",index+1);
}
else{
printf("require element is not found in list");
}
getch();
}
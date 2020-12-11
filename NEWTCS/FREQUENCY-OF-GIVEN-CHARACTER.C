#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b;
int count=0,i=0;
clrscr();
printf("Enter the stinrg\t");
gets(a);
printf("Enter the character which to be want the frequency\t");
scanf("%s",&b);
while(a[i]!='\0')
{
if(a[i]==b)
{
count++;
}
i++;
}
printf("The frequency of given character is %d",count);
getch();
 }
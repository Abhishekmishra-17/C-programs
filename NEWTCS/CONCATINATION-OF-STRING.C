#include<stdio.h>
#include<string.h>
void main()
{
char s[100],r[100];
int count=0,j=0;
clrscr();
printf("Enter the first string\t");
gets(s);
printf("Enter the second string \t");
gets(r);
while(s[count]!='\0')
{
count=count+1;
}
while(r[j]!='\0')
{
s[count]=r[j];
j=j+1;
count=count+1;
}
printf("The concatination of given string is %s",s);
getch();
}
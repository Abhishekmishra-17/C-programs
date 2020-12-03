#include<stdio.h>
#include<string.h>
void main()
{
int k,count=0,j=0,flag=0;
char s[100],r[100];
clrscr();
printf("Enter the string which to be want in reverse\t");
gets(s);
while(s[count]!='\0'){
count++;
}
while(count!=0)
{
r[j]=s[count-1];
j++;
count--;
}
r[j]='\0';
printf("The reverse string is %s \n",r);
/* k=strcmp(s,r);
if(k==0)
{
printf("The given string is palindrome string");
}
else{
printf("The given string is not a palindrome string");
}  */
while(s[count]!='\0'&& r[count]!='\0')
{
if(s[count]!=r[count])
{
flag=1;
break;
}
else{
count++;
}
}
if(flag==0)
{
printf("String is palindrome string");
}
else{
printf("String is not palindrome string");
}
getch();
}
#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int count=0,j=0;
clrscr();
printf("Enter the string\t");
gets(a);
while(a[count]!='\0')
{
if(a[count]=='A'||a[count]=='E'||a[count]=='I'||a[count]=='O'||a[count]=='U'||a[count]=='a'||a[count]=='e'||a[count]=='i'||a[count]=='o'||a[count]=='u')
{
count++;
}
else{
b[j]=a[count];
j++;
count++;
}
}
printf("%s",b);
getch();
}
#include<stdio.h>
#include<conio.h>
int top=-1,i,j,choice=0,n,stack[100];
void push()
{
int item;
printf("Enter the item which  you want to be inserted\t");
scanf("%d",&item);
if(top==n-1)
{
printf("Stack is full\n");
}
else{
top=top+1;
stack[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("Stack is empty");
}
else{
top=top-1;
}
}
void peek()
{
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
if(top==-1)
{
printf("stack is empty\t");
}
}
void main()
{
int choice =0;
clrscr();
printf("Enter the size of stack\t");
scanf("%d",&n);
printf("press 'enter' key \n");
while(choice != 4)
    {
    getch();
    clrscr();
	printf("\n\n*********Main Menu*********\n");
	printf("\nChoose one option from the following list ...\n");
	printf("\n===============================================\n");
	printf("\n 1.PUSH\n2.POP\n3.PEEK\n4.EXIT\n");
	printf("\nEnter your choice?\n");
	scanf("\n%d",&choice);
	switch(choice)
	{
	    case 1:
	    push();
	    break;
	    case 2:
	    pop();
	    break;
	    case 3:
	    peek();
	    break;
	    case 4:
	    exit(0);
	    break;
	    default:
            printf("Please enter valid choice..");  
        }  
    }  
}  

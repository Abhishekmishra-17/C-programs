#include<stdio.h>
#include<conio.h>
int i,j,choice=0,item;
struct node{
int data;
struct node * next;
};
struct node *head;
void push()
{
struct node*ptr;
  printf("Enter the value of item which you want to be inserted\t");
  scanf("%d",&item);
  ptr=(struct node*)malloc(sizeof(struct node*));
  if(ptr==NULL)
  {
  printf("Element is unable ot pushed or overflow condition");
  }
  else{
  if(head==NULL)
  {
  ptr->data=item;
  ptr->next=NULL;
  head=ptr;
  }
  else{
  ptr->data=item;
  ptr->next=head;
  head=ptr;
  }
  }
}
void pop()
{
struct node * ptr;
if(head==NULL)
{
printf("Underflow condition");
}
else{
item=head->data;
ptr=head;
head=head->next;
free(ptr);
}
}
void peek()
{
struct node * ptr;
ptr=head;
if(ptr==NULL)
{
printf("Stack is empty");
}
else
{
while(ptr!=NULL)
{
printf("data printing....\n");
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
}
void main()
{
clrscr();
while(choice!=4)
{
getch();
clrscr();

 printf("Enter the choice you want to execute\n1. push()\n2. pop()\n 3. peek()\n4. exit()");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: push();
 break;
 case 2: pop();
 break;
case 3: peek();
break;
case 4: break;
default: printf("Invalid input");
break;
}
}
getch();
}
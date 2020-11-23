#include<stdio.h>
int stack[10],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
clrscr();
top=-1;
printf("\n Enter the size of the Stack[max-10];");
scanf("%d",&n);
printf("\n\t STACK EXPRESSIONS USING ARRAY");
printf("\n\t.............................");
printf("\n\t1:PUSH\n\t2:POP\n\t3:DISPLAY\n\t4:EXIT");
do
{
printf("\n Enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("\n\t Exit point");
break;
default:
printf("\n\t Please Enter a Valid choice(1/2/3/4)");
}
}
while(choice!=4);
return 0;
}
void push()
{
if (top>=n-1)
{
printf("\n\t Stack is overflow");
}
else
{
printf("\n\t Enter a value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t Stack is underflow");
}
else
{
printf("\n\t Popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n The Elements in Stack \n");
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
printf("\n Press next choice");
}
else
{
printf("\n The stack is empty");
}
}


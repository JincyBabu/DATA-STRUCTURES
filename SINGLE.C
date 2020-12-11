#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;struct node *next;
};
struct node *head=NULL;
void create();
void insert_beg();
void insert_pos();
void insert_end();
void delete_beg();
void delete_pos();
void delete_end();
void delete_all();
void search();
void display();
void main()
{
int ch;
do
{
printf("\n!!!OPERATIONS ON SINGLY LINKED LISTS!!!\n");
printf("\n1:Create\n2:Insert a node at the beggining\n");
printf("3:Insert a node at the position\n");
printf("4:Insert a node at the end\n5:Delete a node at the beginning");
printf("6:Delete a node at the position\n7:Delete a node at the end\n");
printf("8:Delete all nodes\n9:Display\n10:Display\n11:Exit\n");
printf("\n Enter your choice");
switch(ch)
{
case 1:
create();
break;
case 2:
insert_beg();
break;
case 3:
insert_pos();
break;
case 4:
insert_end();
break;
case 5:
delete_beg();
break;
case 6:
delete_pos();
break;
case 7:
delete_end();
break;
case 8:
delete_all();
break;
case 9:
search();
break;
case 10:
display();
break;
case 11:
exit(0);
break;
default:
printf("\n Invalid Choice!");
break;
}
}
while(ch!=11);
}
void create()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Memory cannot be allocated\n");
}
printf("\n Enter the value:");
scanf("%d",&temp->data);
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}
void insert_beg()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n Overflow!");
}
else
{
printf("\n Enter the value:");
scanf("%d",&item);
ptr->data=item;
ptr->next=head;
head=ptr;
printf("\n Node is Inserted!");
}
}
void insert_pos()
{
int i,loc,item;
struct node *ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n Overflow!");
}
else
{
printf("\n Enter the value:");
scanf("%d",&item);
ptr->data=item;
printf("\n Enter the location after which you want to insert:");
scanf("%d",&loc);
temp=head;
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n Node can't be inserted!");
return;
}
}
ptr->next=temp->next;
temp->next=ptr;
printf("\n Node is Inserted!");
}
}
void insert_end()
{
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n Overflow");
}
else
{
printf("\n Enter the value:");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=NULL;
head=ptr;
printf("\n Node is Inserted!");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
printf("\n Node is Inserted!");
}
}
}
void delete_beg()
{
struct node *ptr;
if(head==NULL)
{
printf("\n List is Empty!");
}
else
{
ptr=head;
head=ptr->next;
free(ptr);
printf("\n Node deleted from beginning!");
}
}
void delete_pos()
{
struct node *ptr,*ptr1;
int loc,i;
printf("\n Enter location of node after which deletion is to be performed:");
ptr=head;
for(i=0;i<loc;i++)
{
ptr1=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("\n Can't Delete!");
return;
}
}
ptr1->next=ptr->next;
free(ptr);
printf("\n Deleted node is %d",loc+1);
}
void delete_end()
{
struct node *ptr,*ptr1;
if(head==NULL)
{
printf("\n List is Empty!");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("\n Only node of the list is Deleted");
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=NULL;
free(ptr);
printf("\n Deleted node from the last!");
}
}
void delete_all()
{
struct node *temp;
while(head!=NULL)
{
temp=head;
head=head->next;
free(temp);
}
printf("\n Successfully deleted entire nodes of linked list!");
}
void search()
{
struct node *ptr;
int item,i=0,flag=0;
ptr=head;
if(ptr==NULL)
{
printf("\n Empty List!");
}
else
{
printf("\n Enter item to be searched?\n");
scanf("%d",&item);
while(ptr!=NULL)
{
if(ptr->data==item)
{
printf("\n Item found at location %d",i+1);
flag=0;
}
else
{
flag=1;
}
i++;
ptr=ptr->next;
}
if(flag==1)
{
printf("\n Item not found!");
}
}
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("\n No data items found so nothing to print!");
}
else
{
printf("\n Printing Values....\n");
while(ptr!=NULL)
{
printf("\n%d",ptr->data);
ptr=ptr->next;
}
}
}









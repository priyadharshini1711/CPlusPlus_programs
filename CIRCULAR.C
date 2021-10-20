#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head,*temp,*p;
void create()
{
int i;
temp=(struct node*)malloc(sizeof(struct node));
head=temp;
scanf("%d",&temp->data);
temp->next=head;
p=head;
for(i=0;i<4;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=head;
p->next=temp;
p=p->next;
}
}
void insert()
{
p=head;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the value to be inserted");
scanf("%d",&temp->data);
temp->next=head;
head=temp;
}
void display()
{
p=head;
do
{
printf("\n%d",p->data);
p=p->next;
}while(p!=head);
}
void main()
{
clrscr();
create();
insert();
display();
getch();
}


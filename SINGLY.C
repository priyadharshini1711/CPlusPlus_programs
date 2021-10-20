#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void create(struct node *head)
{
int i;
struct node *p,*temp;
p=head;
for(i=0;i<5;i++)
{
temp=(struct node *)malloc(sizeof(struct node));
scanf("\n%d",&temp->data);
temp->next=NULL;
p->next=temp;
p=p->next;
}
}
void del(struct node *head)
{
struct node *p,*temp;
p=head;
while(p->next->next!=NULL)
p=p->next;
p->next=NULL;
}
void display(struct node *head)
{
struct node *p;
p=head->next;
while(p!=NULL)
{
printf("\n%d",p->data);
p=p->next;
}
}
void main()
{
struct node *h;
clrscr();
h=(struct node *)malloc(sizeof(struct node));
h->next=NULL;
create(h);
del(h);
display(h);
getch();
}


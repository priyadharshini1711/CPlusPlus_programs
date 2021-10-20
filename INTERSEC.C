#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*h1,*h2,*h3,*p,*q,*r,*temp;
void create()
{
int i;
h1=(struct node*)malloc(sizeof(struct node));
h1->next=NULL;
p=h1;
for(i=0;i<5;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("\n%d",&temp->data);
temp->next=NULL;
p->next=temp;
p=p->next;
}
h2=(struct node*)malloc(sizeof(struct node));
h2->next=NULL;
q=h2;
for(i=0;i<5;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("\n%d",&temp->data);
temp->next=NULL;
q->next=temp;
q=q->next;
}
}
void ins()
{
h3=(struct node*)malloc(sizeof(struct node));
h3->next=NULL;
r=h3;
p=h1->next;
q=h2->next;
while(p!=NULL)
{
while(q!=NULL)
{
if(p->data==q->data)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=q->data;
temp->next=NULL;
r->next=temp;
r=r->next;
}
q=q->next;
}
p=p->next;
q=h2->next;
}
}
void display()
{
r=h3->next;
while(r!=NULL)
{
printf("\t%d",r->data);
r=r->next;
}
}
void main()
{
clrscr();
create();
ins();
display();
getch();
}
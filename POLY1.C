#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int pow,co;
struct node *next;
}*h1,*h2,*h3,*p,*q,*r,*temp;
void display();
void create()
{
int i;
h1=(struct node*)malloc(sizeof(struct node));
h1->next=NULL;
p=h1;
for(i=0;i<3;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d%d",&temp->co,&temp->pow);
temp->next=NULL;
p->next=temp;
p=p->next;
}
h2=(struct node*)malloc(sizeof(struct node));
h2->next=NULL;
q=h2;
for(i=0;i<3;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d%d",&temp->co,&temp->pow);
temp->next=NULL;
q->next=temp;
q=q->next;
}
}
void add()
{
h3=(struct node*)malloc(sizeof(struct node));
h3->next=NULL;
p=h1->next;
q=h2->next;
r=h3;
while((p!=NULL)&&(q!=NULL))
{
temp=(struct node*)malloc(sizeof(struct node));
if(p->pow>q->pow)
{
temp->pow=p->pow;
temp->co=p->co;
temp->next=NULL;
r->next=temp;
r=r->next;
p=p->next;
}
if(q->pow>p->pow)
{
temp->pow=q->pow;
temp->co=q->co;
temp->next=NULL;
r->next=temp;
r=r->next;
q=q->next;
}
else if(p->pow==q->pow)
{
temp->co=p->co+q->co;
temp->pow=p->pow;
temp->next=NULL;
r->next=temp;
r=r->next;
p=p->next;
q=q->next;
}
}
while(p!=NULL||q!=NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
if(p!=NULL)
{
temp->pow=p->pow;
temp->co=p->co;
temp->next=NULL;
r->next=temp;
r=r->next;
p=p->next;
}
else
{
temp->pow=q->pow;
temp->co=q->co;
temp->next=NULL;
r->next=NULL;
r=r->next;
q=q->next;
}
}
display(h3);
}
void display(struct node *h3)
{
r=h3->next;
while(r!=NULL)
{
printf("\n%dx%d",p->co,p->pow);
r=r->next;
}
}
void main()
{
clrscr();
create();
display(h3);
getch();
}


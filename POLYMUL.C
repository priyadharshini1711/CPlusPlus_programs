#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct poly
{
int pow,co;
struct poly *next;
}*h1,*h2,*h3,*h4,*p,*q,*r,*s,*temp;
void create()
{
int i;
h1=(struct poly*)malloc(sizeof(struct poly));
h1->next=NULL;
p=h1;
for(i=0;i<3;i++)
{
temp=(struct poly*)malloc(sizeof(struct poly));
scanf("%d",&temp->co);
printf("\tx");
scanf("%d",&temp->pow);
temp->next=NULL;
p->next=temp;
p=p->next;
}
h2=(struct poly*)malloc(sizeof(struct poly));
h2->next=NULL;
q=h2;
for(i=0;i<3;i++)
{
temp=(struct poly*)malloc(sizeof(struct poly));
scanf("%d",&temp->co);
printf("\tx");
scanf("%d",&temp->pow);
temp->next=NULL;
q->next=temp;
q=q->next;
}
}
void polymul()
{
h3=(struct poly*)malloc(sizeof(struct poly));
h3->next=NULL;
r=h3;
p=h1->next;
q=h2->next;
while(p!=NULL)
{
while(q!=NULL)
{
temp=(struct poly*)malloc(sizeof(struct poly));
temp->co=p->co*q->co;
temp->pow=p->pow+q->pow;
temp->next=NULL;
r->next=temp;
r=r->next;
q=q->next;
}
p=p->next;
q=h2->next;
}
}
void polymul1()
{
h4=(struct poly*)malloc(sizeof(struct poly));
h4->next=NULL;
s=h4;
p=h3->next;
q=p->next;
while(p!=NULL||q!=NULL)
{
if(p->pow==q->pow)
{
temp=(struct poly*)malloc(sizeof(struct poly));
temp->co=p->co+q->co;
temp->pow=p->pow;
temp->next=NULL;
s->next=temp;
s=s->next;
}
else
{
temp=(struct poly*)malloc(sizeof(struct poly));
temp->co=p->co;
temp->pow=p->pow;
temp->next=NULL;
s->next=temp;
s=s->next;
}
p=p->next;
q=q->next;
}
}
void display()
{
s=h4->next;
while(s!=NULL)
{
printf("\n%dx%d",s->co,s->pow);
s=s->next;
}
}
void main()
{
clrscr();
create();
polymul();
polymul1();
display();
getch();
}
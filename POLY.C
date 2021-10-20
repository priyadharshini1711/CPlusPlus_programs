#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct poly
{
int pow,co;
struct poly *next;
}*head3;
void create(struct poly *h)
{
int i;
struct poly *p,*temp;
p=h;
printf("\n enter the 3 value");
for(i=0;i<3;i++)
{
temp=(struct poly *)malloc(sizeof(struct poly));
scanf("%d",&temp->co);
printf("x");
scanf("%d",&temp->pow);
temp->next=p->next;
p->next=temp;
p=p->next;
}
}
void add(struct poly *head1,struct poly *head2)
{
struct poly *p1,*p2,*p3,*temp;
head3=(struct poly *) malloc(sizeof(struct poly));
head3->next=NULL;
p1=head1->next;
p2=head2->next;
p3=head3->next;
while((p1!=NULL)&&(p2!=NULL))
{
temp=(struct poly*)malloc(sizeof(struct poly));
if(p1->pow>p2->pow)
{
temp->pow=p1->pow;
temp->co=p1->co;
temp->next=NULL;
p3->next=temp;
p1=p1->next;
p3=p3->next;
}
else if(p2->pow>p1->pow)
{
temp->pow=p2->pow;
temp->co=p2->co;
temp->next=NULL;
p3->next=temp;
p2=p2->next;
p3=p3->next;
}
else if(p1->pow==p2->pow)
{
temp->pow=p1->pow;
temp->co=p2->co;
temp->next=NULL;
p3->next=temp;
p3=p3->next;
p1=p1->next;
p2=p2->next;
}
}
while((p1!=NULL)&&(p2!=NULL))
{
temp=(struct poly*)malloc(sizeof(struct poly));
if(p1!=NULL)
{
temp->pow=p1->pow;
temp->co=p1->co;
temp->next=NULL;
p3->next=temp;
p1=p1->next;
p3=p3->next;
}
else if(p2!=NULL)
{
temp->pow=p2->pow;
temp->co=p2->co;
temp->next=NULL;
p3->next=temp;
p2=p2->next;
p3=p3->next;
}
}
}
void display()
{
struct poly *p;
p=head3->next;
while(p!=NULL)
{
printf("\n%d",p->co);
printf("x");
printf("%d",p->pow);
p=p->next;
}
display();
}
void main()
{
struct poly *h1,*h2;
clrscr();
h1=(struct poly *)malloc(sizeof(struct poly));
h1->next=NULL;
h2=(struct poly *)malloc(sizeof(struct poly));
h2->next=NULL;
create(h1);
create(h2);
add(h1,h2);
getch();
}


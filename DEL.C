#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next,*prev;
};
void create(struct node *head)
{
int i;
struct node *p,*temp;
p=head;
for(i=0;i<5;i++)
{
temp=(struct node *)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=temp->prev=NULL;
p->next->prev=temp;
p->next=temp;
p=p->next;
}
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
h=(struct node *)malloc(sizeof(struct node));
h->next=NULL;
clrscr();
create(h);
display(h);
getch();
}


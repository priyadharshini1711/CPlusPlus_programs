#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head,*p,*temp;
void create()
{
int i;
head=(struct node *)malloc(sizeof(struct node));
head->next=NULL;
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
void display(int num)
{
int i;
p=head;
while(p->next!=NULL)
{
if(num==i)
printf("\n%d",p->data);
else
{
i++;
p=p->next;
}
}
}
void main()
{
int n;
clrscr();
create();
printf("\n enter the sno of the data");
scanf("%d",&n);
display(n);
getch();
}
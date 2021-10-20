#include<iostream.h>
#include<conio.h>
class node
{
public:
int element,hg;
node *right,*left;
}*t,*k1;
int max(int a,int b);
int height(node*);
node* singlerotationwithright(node*);
node* singlerotationwithleft(node*);
node* doublerotationwithright(node*);
node* doublerotationwithleft(node*);
node* insert(int,node*);
void display(node*);
int height(node *p)
{
if(p==NULL)
return -1;
else
return p->hg;
}
node* singlerotationwithleft(node *k2)
{
//node *k1;
k1=k2->left;
k2->left=k1->right;
k1->right=k2;
k2->hg=max(height(k2->left),height(k2->right))+1;
k1->hg=max(height(k1->left),height(k1->right))+1;
return k1;
}
node* singlerotationwithright(node *k2)
{
//node *k1;
k1=k2->right;
k2->right=k1->left;
k1->left=k2;
k2->hg=max(height(k2->left),height(k2->right))+1;
k1->hg=max(height(k1->left),height(k1->right))+1;
return k1;
}
node* doublerotationwithleft(node *k3)
{
k3->left=singlerotationwithright(k3->left);
return singlerotationwithleft(k3);
}
node* doublerotationwithright(node *k3)
{
k3->left=singlerotationwithleft(k3->left);
return singlerotationwithright(k3);
}
int max(int a,int b)
{
return (a>b)?a:b;
}
node* insert(int x,node *t)
{
if(t==NULL)
{
t=new node;
t->element=x;
t->left=t->right=NULL;
}
else if(x<t->element)
{
t->left=insert(x,t->left);
if(height(t->left)-height(t->right)==2)
{
if(x<t->left->element)
t=singlerotationwithleft(t);
else
t=doublerotationwithleft(t);
}
}
else if(x>t->element)
{
t->right=insert(x,t->right);
if(height(t->right)-height(t->left)==2)
{
if(x>t->right->element)
t=singlerotationwithright(t);
else
t=doublerotationwithright(t);
}
}
t->hg=max(height(t->left),height(t->right))+1;
return t;
}
void display(node *t)
{
if(t!=NULL)
{
display(t->left);
cout<<t->element;
display(t->right);
}
}
void main()
{
int i,x;
t=NULL;
clrscr();
t=new node;
do
{
cin>>x;
t=insert(x,t);
cout<<"press 1 to continue";
cin>>i;
}while(i==1);
display(t);
getch();
}
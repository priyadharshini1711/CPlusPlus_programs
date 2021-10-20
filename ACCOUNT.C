#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
int n,n1,n2,x;
long int ph,sal,rent;
char solar,name[20],veh[20],house[20],house1[10]="rented";
clrscr();
printf("\n hello welcome to velammal accounting systm \n we promise you that we provide the best at your accounting system");
printf("\n to start of with please enter your basic details");
printf("\n enter the name of the head of the family");
scanf("\t%s",&name);
printf("\n enter the number of members in your family");
scanf("\t%d",&n);
printf("\n enter the n umber of adults in your family age above 18 years");
scanf("\t%d",&n1);
printf("\n enter the number of school going children");
scanf("\t%d",&n2);
printf("\n enter your phone number");
scanf("\t%ld",&ph);
printf("\n enter the type of vehicle you have two wheeler/four wheeler");
scanf("\t%s",veh);
printf("\n your house is either rented/leased/owned\t");
scanf("%s",&house);
printf("\n do you use solar panel for electricity");
scanf("\t%c",solar);
printf("\n thank you for your valuable information");
printf("\n now let us start up with accounting");
printf("\n enter your basic salary per month");
scanf("\t%ld",&sal);
x=strcmp(house,house1);
if(x==0)
{
printf("\n enter your rent per month");
scanf("\n%d",rent);
}
getch();
}
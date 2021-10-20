#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("do u wanna shut down the sys");
scanf("%c",ch);
if(ch=='y')
system("c:\\windows\\system32\\shutdown/s");
return 0;
}
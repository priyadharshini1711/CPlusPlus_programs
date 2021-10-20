#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a,l,i,j=0;
char word[100],word1[100],word2[100];
scanf("%s",word);
l=strlen(word);
a=l/2;
for(i=0;i<=a;i++)
word1[i]=word[i];
for(;l>a;l--)
{
word2[j]=word[l-1];
j++;
}
strcpy(word1,word2);
printf("%s",word1);
getch();
}
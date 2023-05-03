#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char s[30];
clrscr();
printf("enter the elements");
gets(s) ;
  for(i=0;s[i]!='\0';i++)
  {
    for(j=0;j<=i;j++)
    {
    printf("%c",s[j]);
    }
    printf("\n");
    }
    getch();
    }
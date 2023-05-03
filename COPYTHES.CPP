#include<stdio.h>
#include<conio.h>
void main()
{
char arr[100],copy[100];
int chirag=0,i;
clrscr();
printf("enter the string: ");
fflush(stdin);
gets(arr);
while(arr[chirag]!='\0')
{
chirag++;
}
for(i=0;i<=chirag;i++)
{
 copy[i]=arr[i];
  }
  printf("copy the string");
  puts(copy);
  getch();
  }
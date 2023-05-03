#include<stdio.h>
#include<conio.h>
void main()

{
 int i,j,x[9]={1,2,3,4,5,6,7,8,9};
 clrscr();
  for(i=0;i<=9;i++)
 {
 printf("\n");
 for(j=0;j<=i;j++)
 {
 printf("%d",x[j]);
 }
 getch();
 }
 }
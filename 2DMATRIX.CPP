#include<stdio.h>
#include<conio.h>
void main()
{
int i,A[2][3],j,sum=0;
clrscr();
  for(i=0;i<2;i++)
  {
  for(j=0;j<3;j++)
  {
  scanf("%d%d",&A[i][j]);
  }
  }
  for(i=0;i<2;i++)
  {
  for(j=0;j<3;j++)
  {
  printf("%d",A[i][j]);
  sum =sum+A[i][j];
  }
  }
  printf("sum=&%d",sum);
  getch();}
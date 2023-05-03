#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 {
 int i,n, fact,x,j;
 float sum=1;
 clrscr();
 printf("enter the no");
 scanf("%d%d",&x,&n);
 for(i=0;i<=n;i++)
 {
 fact=1;
  for(j=1;j>=1;j--)
  {
  fact =fact*j;
  sum=sum+(pow(x,i)/fact);
  }

  printf("\nsum of the series :%f",sum);
  }
  getch();
  }

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student {
  int roll;
  char name[20];

  int  marks;
  };
  //typedef struct student x;

   void main()
   {
   char a[20];
   int i,temp,j;
   clrscr();
   struct student y[3];

   printf("enter the details");
   for(i=0;i<=2;i++)
   {
   printf("enter roll no,name ,marks");

   scanf("%d %s %d",&y[i].roll,&y[i].name,&y[i].marks);
   clrscr();
   }
   for(i=0;i<=2;i++)
   {
   printf("roll no=%d\tname=%s\tmarks=%d\n",y[i].roll,y[i].name,y[i].marks);
   }
   for(i=0;i<=2;i++)
   {
  for(j=0;j<=2;j++)
   {
   if(y[j].roll>y[j+1].roll)
    {
   temp=y[j].roll;

   y[j].roll=y[j+1].roll;
   y[j+1].roll=temp;

   strcpy(a,y[j].name);
   strcpy(y[j].name,y[j+1].name);
   strcpy(y[j+1].name,a);
   }
   }
   }
   for(i=0;i<=2;i++)
   {
     printf("\n%d %s %d",y[i].roll,y[i].name,y[i].marks);

    }
   getch();
   }





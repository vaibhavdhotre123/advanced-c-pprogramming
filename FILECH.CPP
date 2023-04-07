#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
char filename[100];
FILE *fptr;
int count=0;
char ch;

printf("enter filename");
scanf("%s",&filename);

fptr=fopen(filename,"r");
if (fptr==NULL)
{
 printf("unable to open file.\n");
 }

 while((ch=fgetc(fptr))!=EOF)
 {
 count++;
 }
 fclose(fptr);
 printf("no of characteristcs in %s is %d .\n",filename,count);
 getch();
 }

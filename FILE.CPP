#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fptr;
 char name[]="reverse.cpp ";
 fptr=fopen(name,"wt");
 if(fptr==NULL)
 {
 printf("chirag");
 }
 else
 {
 fprintf(fptr,"hello world");
 }
 getch();
 }
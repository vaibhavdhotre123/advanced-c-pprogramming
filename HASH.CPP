#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct hash{
  char name[30];
  int hsh;
  struct hash*next;
  };
  typedef struct hash hash;
  hash *lol;


  void add(void)
  {
  printf("enter your name");
  scanf("%s",lol->name);

  int h=strlen(lol->name);
  h=(h/2+10)*3;
  lol->hsh=h;
  printf("%d is the good code",lol->hash);
  lol=lol->next;

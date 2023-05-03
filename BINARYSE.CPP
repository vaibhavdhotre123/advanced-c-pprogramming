#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int k,n,arr,mid;
int start=0;
int end=n-1;

clrscr();
printf("enter the no");
  while(start<=end)
  {
   mid=start+(end-start)/2;
  if(arr[mid]==k)
  {
  return mid;
  }
  if(arr[mid]<k)
  {
  start=mid+1;
  }
  else
  {
  end=mid-1;
  }
  getch();
  }
  return -1;
  }

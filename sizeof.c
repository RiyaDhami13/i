#include<stdio.h>
#include<conio.h>
int main()
{
  int s=9;
  float g=9.8;
  char q='Q';
  double pi=3.14159;
  printf("Size of int:%d bytes",sizeof(s));
  printf("\nSize of float:%d bytes",sizeof(g));
  printf("\nSie of char:%d bytes",sizeof(q));
  printf("\nSize of double:%d bytes",sizeof(pi));
  return 0;
}
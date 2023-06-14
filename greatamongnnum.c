#include<stdio.h>
#include<conio.h>
int main()
{
int n,x[1000],i,g=0;
printf("Enter any nember");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",x[i]);
if(g<x[i])
{
g=x[i];
}
}
printf("The greatest number is%d",g);
return0;
}

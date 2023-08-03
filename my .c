#include<stdio.h>
int main()
{
  int n,c[1000],av,s=0,x=0,i;
  printf("Enter any number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&c[i]);
    s=s+c[i];
    if(c[i]<40)
    {
     x=x+1; 
    }
    }
    av=s/n;
    printf("\nAverage is%d",av);
    printf("\nTotal no of fail students is %d",x);
    return 0;
}

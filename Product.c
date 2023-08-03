#include<stdio.h>
#include<conio.h>
int main(){
int i,p=1,n;
printf("Enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=p*i;
}
printf("The factorial is %d",p);
return 0;
}

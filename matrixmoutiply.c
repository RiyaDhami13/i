#include<conio.h>n
#include<stdio.h>
int main()
{
int a[4][3],b[4][3],c[4][3],i,j;
printf("Enter two matrix");
for(i=0;i<4;i++)
{
for(j=0;i<3;j++)
{
scanf("%d%d",8a[i][j],&b[i][j]);
c[i][j]=a[i][j]+b[i][j];
}
}
for (i=0;i<4;i++)
{
printf("%d\t",c[i][j]);
}
}
return0;
}

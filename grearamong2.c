#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("Type any two numbers");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("The greatest number is%d",a);
    }else{
        printf("the greatest number is%d",b);
    }
    getch();
    return 0;
}
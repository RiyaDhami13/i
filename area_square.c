#include<stdio.h>
#include<conio.h>
int main()
{
  float side, area;
  printf("Enter the side length of the square in meters:");
  scanf("%f",&side);
  area = side * side;
  printf("\nThe area of the square is : %2f square meters", area);
  return 0;
}
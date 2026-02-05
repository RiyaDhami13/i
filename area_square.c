#include <stdio.h>

int main(void)
{
    float side, area;
    printf("Enter the side length of the square in meters: ");
    scanf("%f", &side);
    area = side * side;
    printf("\nThe area of the square is: %f square meters\n", area);
    return 0;
}

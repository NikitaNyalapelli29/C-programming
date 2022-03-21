#include<stdio.h>

int main()
{
    int a,b,area_rect;

    printf("Enter the value of a \n");
    scanf("%d",&a);

    printf("Enter the value of b \n");
    scanf("%d",&b);

    area_rect = a*b;
    printf("Area of rectangle is %d",area_rect);

    return 0;
}

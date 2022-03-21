#include<stdio.h>

int main()

{
    float radius,height,volume_cylinder;

    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    printf("\n Enter the value of height: ");
    scanf("%f",&height);

    volume_cylinder = 3.142*radius*radius*height;
    printf("\n the volume of cylinder is:%f",volume_cylinder);

    return 0;


}

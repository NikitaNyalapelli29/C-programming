#include<stdio.h>
int main()
{
    int radius;
    float area_circle;

    printf("Enter value of radius:");  // print
    scanf("%d",&radius);   // takes values from user

    area_circle = 3.142*radius*radius;     // calculate the area of circle
    printf("the value of area of circle is:%f",area_circle);    // print the value of area of circle

    return 0;

}

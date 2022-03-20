#include<stdio.h>
int main()
{
    int principal,rate,year;
    float simple_interest;

    printf("Enter the value of principal : ");
    scanf("%d",&principal);

    printf("Enter the value of rate : ");
    scanf("%d",&rate);

    printf("Enter the value of year : ");
    scanf("%d",&year);

    simple_interest = (principal*rate*year)/100;

    printf("the values of simple interest is: %f",simple_interest);

    return 0;

}

#include<stdio.h>
int main()
{
    // SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE
    int one,two;
    printf("\n enter the first value : ");
    scanf("%d",&one);

    printf(" enter the second value : ");
    scanf("%d",&two);

    printf(" Before swapping two numbers \n");
    printf(" first = %d",one);
    printf("\n second = %d",two);

    one=one+two;
    two=one-two;
    one=one-two;

    printf("\n After swapping two numbers \n");
    printf(" one = %d",one);
    printf("\n two = %d",two);


    return 0;

}


#include<stdio.h>

int main ()
{
    int num1=4,num2=6, temp;
    printf("Before swapping \n");
    printf("the value of num1 is %d\n",num1);
    printf("the value of num2 is %d\n",num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("\nAfter swapping \n");
    printf("the value of num1 is %d\n",num1);
    printf("the value of num2 is %d\n",num2);
    return 0;
}

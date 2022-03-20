#include<stdio.h>
#include<math.h>
int main ()
{
    int num1, num2, ans;

    printf("Enter value of num1 here: ");
    scanf("%d", &num1);

    printf("Enter value of num2 here: ");
    scanf("%d", &num2);

    printf("The addition of two numbers is : %d\n",num1 + num2);
    printf("The substraction of two numbers is : %d\n",num1 - num2);
    printf("The multiplication of two numbers is : %d\n",num1 * num2);
    printf("The division of two numbers is : %d\n",num2 / num1);

    printf("It gives remainder of two numbers: %d\n", num1%num2);
    printf("The value of num1 to the power of num2 is: %f\n",pow(num1, num2));
    printf("The value of two numbers is : %f\n",4/2.0);
    return 0;
}

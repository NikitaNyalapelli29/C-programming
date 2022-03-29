#include<stdio.h>
int main()
{
    int number, reminder, sum;

    printf("Enter any number : ");
    scanf("%d", &number);

    while(number>0)
    {
        reminder=number % 10;
        sum=sum+reminder;
        number=number/10;
    }
    printf("The sum of digits is :%d ",sum);
    return 0;
}

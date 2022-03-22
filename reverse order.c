#include<stdio.h>
int main()
{
    int number, reminder,rev;

    printf("Enter number: ");
    scanf("%d",&number);

    for(int i=0; number>0; i++)
    {
        reminder = number%10;

        printf("%d",reminder);
        number=number/10;
    }

    return 0;
}

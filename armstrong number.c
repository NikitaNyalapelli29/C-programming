#include<stdio.h>

int main ()
{
    int number, reminder, sum,temp;

    printf("Enter any number: ");
    scanf("%d",&number);

    temp = number;
    while(number>0)
    {
       reminder=number%10;
       sum=sum+(reminder*reminder*reminder);
       number=number/10;

    }
    printf("The sum numbers is %d\n", sum);
    if(temp==sum){
    printf("It is armstrong number");
    }
    else{
    printf("It is not armstrong number");
    }
    return 0;

}

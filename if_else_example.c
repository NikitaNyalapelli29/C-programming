#include<stdio.h>

int main()
{

    int num;
    printf("Please enter a number:");
    scanf("%d",&num);
    if(num < 50){
        printf("%d is less than 50",num);
    }
    else if(num == 50){
        printf("%d is equal to 50",num);
    }
    else{
        printf("%d is greater than 50",num);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    float celcius, far;

    printf("Enter value of celcius is:");
    scanf("%f",&celcius);

    far = (celcius * 9/5) + 32;
    printf("answer is: %f",far);

    return 0;


}

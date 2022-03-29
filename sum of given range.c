#include<stdio.h>
int main()
{
    int start, end, sum=0;
    printf("Enter a starting value: ");
    scanf("%d",&start);

    printf("Enter a end value: ");
    scanf("%d",&end);

    for(int i=start; i<= end; i++ )
            sum= sum+i;



    printf("%d", sum);
    return 0;
}

#include<stdio.h>

int main()
{
    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel", ch);
            break;
        default:
            printf("%c is not a vowel", ch);
    }
    return 0;
}
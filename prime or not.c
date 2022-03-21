#include <stdio.h>

int main() {
  int number, i, c = 0;
  printf("Enter any number :");
  scanf("%d", &number);


  for (i = 1; i <= number; i++)
  {
        if (number%i == 0)
        {
         c++;
        }
  }

  if (c == 2)
  {
  printf("The given number is a Prime number");
  }
  else
  {
  printf("The given number is not a Prime number");
  }
  return 0;
}

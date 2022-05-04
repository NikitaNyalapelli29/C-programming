#include<stdio.h>

int main (){
  int num1,num2,num3;
  printf("Enter num1 value : ");
  scanf("%d",&num1);
  
  printf("Enter num2 value : ");
  scanf("%d",&num2);
  
  printf("Enter num3 value : ");
  scanf("%d",&num3);
  
  if(num1>num2 && num1>num3){
    printf("%d is largest",num1);
  }
  else if(num2>num3){
    printf("%d is largest",num2);
  }
  else{
    printf("%d is largest",num3);
  }
  return 0;
}
  

/*WAP to find the grade of a student. Take input marks of 3 subjects and calculate the percentage.
       If percentage >= 85 print A grade,
If percentage < 85 && percentage >= 75 print B grade,
If percentage < 75 && percentage >= 50 print C grade,
If percentage < 50 && percentage >= 30 print D grade,
If percentage <30 print fail
*/

#include<stdio.h>
int main()
{
   int math,physics, chemistry,sum;
   float percentage;

   printf("Enter your math marks : ");
   scanf("%d",&math);

   printf("Enter your physics marks : ");
   scanf("%d",&physics);

   printf("Enter your chemistry marks : ");
   scanf("%d",&chemistry);

   sum = math+physics+chemistry;

   percentage = (sum/3);

   printf("The sum of all subjects is %d\n",sum);
   printf("Percentage is %f\n",percentage);

   if((percentage < 100)&&(percentage >= 85) )
    {
        printf("Your Grade Is A !!\n");
        printf("THANK YOU!!");
    }
   else if((percentage < 85 ) && (percentage >= 75))
   {
       printf("Your Grade is B !!\n");
       printf("THANK YOU !!");
   }
   else if((75 > percentage) && (percentage >= 50))
   {
       printf("Your Grade is C !!\n");
       printf("THANK YOU !!");
   }
   else if((50 > percentage) && (percentage >= 30))
   {
       printf("Your Grade is D !!\n");
       printf("THANK YOU !!");
   }
   else
   {
       printf("Your Fail !!\n");
       printf("THANK YOU !!");
   }
   return 0;
}

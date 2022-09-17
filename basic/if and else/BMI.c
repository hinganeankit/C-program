#include<stdio.h>
main()
{
    float w;
    float h;
    printf("Enter the weight in kg\n");
    scanf("%f",&w);
    printf("Enter the height in m\n");
    scanf("%f",&h);
    float bmi= w/(h*h);
   if (bmi<15)
   {
       printf("Person is under starvation condition\n");
   }
    if (bmi>16&&bmi<17.5)
   {
       printf("Person is under Anorexic condition\n");
   }
    if (bmi>17.6&&bmi<18.5)
   {
       printf("Person is under Underweight condition\n");
   }
   if (bmi>18.6&&bmi<24.9)
   {
       printf("Person is under Ideal condition\n");
   }
   if (bmi>25&&bmi<29.9)
   {
       printf("Person is under Overweight condition\n");
   }
   if (bmi>30&&bmi<39.9)
   {
       printf("Person is under Obese condition\n");
   }
   if (bmi>=40)
   {
       printf("Person is under Morbidly Obese condition\n");
   }

}

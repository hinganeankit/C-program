#include<stdio.h>

main()

{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    printf("enter the value of subject A\n");
    scanf("%f",&a);
    printf("enter the value of subject B\n");
    scanf("%f",&b);
    printf("enter the value of subject C\n");
    scanf("%f",&c);
    printf("enter the value of subject D\n");
    scanf("%f",&d);
    printf("enter the value of subject E\n");
    scanf("%f",&e);
    printf("enter the value of subject F\n");
    scanf("%f",&f);
    float res= a+b+c+d+e;
    printf("Total of all subject = %f \n",res);
    float res1= (a+b+c+d+e)/5;
    printf("Average total of all subject = %.3f \n",res1);
    float res2=(a+b+c+d+e)*100/f;
    printf("Percentage obtain= %f",res2);

}

#include<stdio.h>

main()

{
    float p;
    float r;
    float t;
    printf("enter the value of subject P\n");
    scanf("%f",&p);
    printf("enter the value of subject R\n");
    scanf("%f",&r);
    printf("enter the value of subject T\n");
    scanf("%f",&t);
    float res= p+(p*r*t);
    printf("Simple Interest = %.4f",res);
}

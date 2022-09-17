#include<stdio.h>

main()

{
    int a;
    int b;
    float A,B;
    printf("enter the value of a\n");
    scanf("%d",&a);
    scanf("%f",&A);
    printf("enter the value of b\n");
    scanf("%d",&b);
    scanf("%f",&B);
    int res= a+b;
    printf(" A + b = %dn",res);
    int res2= a-b;
    printf(" A - B = %d\n",res2);
    int res3= a*b;
    printf(" A * B = %d\n",res3);
    float res4= A/B;
    printf(" A / B = %.3f",res4);
}

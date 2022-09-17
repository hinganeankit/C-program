#include<stdio.h>

main()

{
    int centimeter;
    printf("enter the value of centimeter\n");
    scanf("%d",&centimeter);
    double  meter= centimeter*0.01;
    printf("Meters=%.2lf\n",meter);
    double  kilometer= centimeter*0.00001;
    printf("kilometers=%.5lf",kilometer);
}

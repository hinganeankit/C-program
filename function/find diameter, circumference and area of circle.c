#include<stdio.h>
float doFindDiameter(float num)
{
    int res = 2*num;
    return res;
}
float doFindcircumference(float num1)
{
    float res1 = 2*3.14*num1;
    return res1;
}
float doFindArea(float num2)
{
    float res2 = 3.14*num2*num2;
    return res2;
}
main()
{
    float radius;
    printf("Enter the Radius\n");
    scanf("%f",&radius);
    float a = doFindDiameter(radius);
    printf("Diameter is %f\n",a);

    float b = doFindcircumference(radius);
    printf("Circumference is %f\n",b);

    float c = doFindArea(radius);
    printf("Area is %f\n",c);
}


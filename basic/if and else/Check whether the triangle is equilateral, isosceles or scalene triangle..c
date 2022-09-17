#include<stdio.h>
main()
{
    int num;
    int num2;
    int num3;
    printf("Enter the first angle of triangle\n");
    scanf("%d",&num);
    printf("Enter the second angle of triangle\n");
    scanf("%d",&num2);
    printf("Enter the third angle of triangle\n");
    scanf("%d",&num3);

    int res1= (num==num2&& num2==num3&& num3==num);
    int res2=(num==num2|| num2==num3|| num==num3);
    if (res1)
    {
        printf("equilateral triangle\n",res1);
    }
    else if (res2)
    {
        printf("isosceles triangle\n",res2);
    }
    else
    {
        printf("scalene triangle\n",res1);
    }

}



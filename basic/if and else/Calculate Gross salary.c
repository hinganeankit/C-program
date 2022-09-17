#include<stdio.h>
main()
{
    float num;
    printf("Basic salary obtain\n");
    scanf("%f",&num);
    if (num<=10000)
    {
        float res= num+(0.2*num)+(0.8*num);
        printf("Gross salary is = %f",res);
    }

    else if (num<= 20000)
    {
        float res2= num+(0.25*num)+(0.9*num);
        printf("Gross salary is = %f",res2);
    }
     else if (num>20000)
    {
        float res3= num+(0.3*num)+(0.95*num);
        printf("Gross salary is = %f",res3);
    }



}

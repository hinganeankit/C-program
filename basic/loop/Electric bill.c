#include<stdio.h>
main()
{
    float num;
    printf("Enter number units\n");
    scanf("%f",&num);

    if(num<=50)
    {
    float res=(num*0.50)+(num*0.5*0.2);
    printf("%f the total bill",res);
    }

    else if(num>=50  && num<=150)
    {
     float res2=(num*0.75)+(num*0.75*0.2);
    printf("%f the total bill",res2);
    }
     else if(num>=150  && num<=250)
    {
     float res3=(num*1.20)+(num*1.20*0.2);
    printf("%f the total bill",res3);
    }
     else if(num>=250  && num<=350)
    {
     float res4=(num*1.5)+(num*1.5*0.2);
    printf("%f the total bill",res4);
    }
}

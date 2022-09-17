#include<stdio.h>

main()
{
    int num;
    printf(" Enter the value\n");
    scanf("%d",&num);
    if (num%5==0)
    {
        printf("Following value is divisible by 5\n");
        int res= num/5;
        printf("the Quotient is = %d",res);
    }
    else
    {
        printf("Following value is not divisible by 5\n");
    }

}

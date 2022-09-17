#include<stdio.h>

main()
{
    int num;
    int num2;

    printf("Enter first value \n");
    scanf("%d",&num);
    printf("Enter second value \n");
    scanf("%d",&num2);

    if(num>num2)
    {
        printf("The maximum value is = %d",num);
    }
    else
    {
        printf("The maximum value is = %d",num2);
    }
}

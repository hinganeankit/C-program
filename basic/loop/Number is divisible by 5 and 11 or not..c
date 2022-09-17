#include<stdio.h>

main()
{
    int num;
    printf("Enter the value \n");
    scanf("%d",&num);

    if (num%5==0 && num%11==0)
    {
        printf("The following number is divisible by both \n");
    }
        else if(num%5==0)
        {
            printf("The following number is divisible by 5\n");
        }
        else if (num%11==0)
        {
            printf("The following number is divisible by 11\n");
        }
        else
        {
            printf("The following number is not by divisible both");
        }

}

#include<stdio.h>

main()
{
    int num;
    printf(" Enter year \n");
    scanf("%d",&num);
    if (num%4==0)
    {
        printf("Following year is Leaf year\n");

    }
    else
    {
        printf("Following year is not Leaf year\n\n");
    }

}


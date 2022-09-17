#include<stdio.h>
main()
{
    int i;
    int j;

    for (i=1;i<=5;i=i+1)
    {
        for (j=1;j<=i;j=j+1)
        {
            if (i==1|| j==i|| j==1|| i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }
}


#include<stdio.h>
main()
{
    int i;
    int j;
    int s=1;

    for (i=1;i<=5;i=i+1)
    {
        for (s=1;s<i;s=s+1)
        {
            printf(" ");
        }
        for (j=1;j<=5;j=j+1)
            {

        if  (i==1 || i==5 || j==1 || j==5)
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


#include<stdio.h>
main()
{
    int i;
    int j;
    int s=1;

    for (i=1;i<=5;i=i+1)
    {
        for (s=i;s<5;s=s+1)
        {
            printf(" ");
        }
        for (j=1;j<=5;j=j+1)
        {
            printf("*");
        }
            printf("\n");

    }
}

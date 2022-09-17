#include<stdio.h>
main()
{
    int i;
    int j;
    int s;

    for (i=1;i<=5;i=i+1)
    {
        for (s=i;s<=4;s=s+1)
        {
            printf(" ");
        }
        for (j=1;j<=i;j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
}

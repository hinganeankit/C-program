#include<stdio.h>
main()
{
    int i;
    int j;
    int space;

    for (i=1;i<=5;i=i+1)
    {
        for (space=1;space<=i;space=space+1)
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

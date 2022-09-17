//10001
//01010
//00100
//01010
//10001
#include<stdio.h>
main()
{
    int i;
    int j;

    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if (i==j || (i+j)%6==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }       printf("\n");
    }

}

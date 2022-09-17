//12345
//23456
//34567
//45678
//56789

#include<stdio.h>
main()
{
    int i;
    int j;
    int k;

    for (i=1;i<=5;i++)
    {
        k=i;
        for (j=1;j<=5;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}







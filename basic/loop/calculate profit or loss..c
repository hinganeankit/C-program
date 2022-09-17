#include<stdio.h>
main()
{
    int a;
    int b;
    printf("Enter selling price\n",&a);
    scanf("%d",&a);
    printf("Enter cost price\n",&b);
    scanf("%d",&b);
    if (a>b)

    {
       printf("Profit");
    }
    else if(a==b)
    {
        printf("Neithr profit nor loss");
    }
    else
        {
            printf("loss");
        }
    }


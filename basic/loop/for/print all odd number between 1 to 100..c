#include<stdio.h>
main()
{
    int x;
    int y;
    printf("Enter the end value\n");
    scanf("%d",&y);

    for (x=1;x<=y;x=x+1)
    {
        if (x%2!=0)
        {
            printf("%d\n",x);
        }
    }
}

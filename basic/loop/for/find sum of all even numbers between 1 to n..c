#include<stdio.h>
main()
{
    int x;
    int y;
    int sum=0;
    printf("Enter end point\n");
    scanf("%d",&y);

    for (x=1;x<=y;x=x+1)
    {
        if (x%2==0)
        {
            sum=sum+x;
        }
    }
            printf("%d\n",sum);
}

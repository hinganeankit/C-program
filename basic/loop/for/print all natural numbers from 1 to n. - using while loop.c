#include<stdio.h>
main()
{
    int x=1;
    int n;
    printf("Enter the end value\n");
    scanf("%d",&n);

    for (x=1;x<=n;x=x+1)
    {
        printf("%d\n",x);
    }
}

#include<stdio.h>
main()
{
    int n;

    printf("Enter the no. from where to Rev\n");
    scanf("%d",&n);

    while(n>=1)
    {
        printf("%d\n",n);
        n=n-1;
    }
}

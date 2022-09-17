#include<stdio.h>
main()
{
    int x=1;
    int n;
    printf("enter the end point\n");;
    scanf("%d",&n);
    int sum=0;
    while (x<=n)
    {
        sum= x+sum;
        x=x+1;
    }
     printf("%d\n",sum);
}

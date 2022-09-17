#include<stdio.h>
int findNumber(int i)
{
    if (i%2==0)
    {
        printf("%d is even number\n",i);
    }
    else
    {
        printf("%d is odd number\n",i);
    }
}
main()
{
    int num;

    printf("Enter Number 1\n");
    scanf("%d",&num);
    int get=findNumber(num);
    printf("%d\n",get);
}

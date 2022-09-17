#include<stdio.h>
main()
{
    int x=1;
    int y=10;
    int n;
    int res;
    printf("Enter the value for multiplication table\n");
    scanf("%d",&n);

    for (x=1;x<=y;x=x+1)
    {
        res= x*n;
        printf("%d\n",res);
    }

}

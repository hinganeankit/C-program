#include<stdio.h>
main()
{
    int x=1;
    int n;
    printf("Enter the end point\n");
    scanf("%d",&n);

     while (x<=n)
     {
        if (x%2!=0)
        {
         printf("%d\n",x);
        }
         x=x+1;
     }
}


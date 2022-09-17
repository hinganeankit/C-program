#include<stdio.h>
main()
{
    int x;
    int y;
    int sum=0;
    printf("Enter the end vale\n");
    scanf("%d",&y);

    for (x=1;x<=y;x=x+1)
     {
         sum=sum+x;
     }
         printf("%d\n",sum);
}

#include<stdio.h>
main()
{
    int x;
    int y;
    int sum=0;
    printf("Enter the end value\n");
    scanf("%d",&y);

    for (x=1;x<=y;x=x+1)
    {
      printf("%d\n",x);
    }
}

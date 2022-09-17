#include<stdio.h>
void doPerfect(int n)
{
    int i=1,j,sum=0;
    while (i<=n)
    {
       sum=0;
    for (j=1;j<i;j++)
    {
     if (i%j==0)
        {
          sum=sum+j;
        }
    }
     if (sum==i)
        {
          printf("%d\n",i);
        }
          i++;
    }

}

main()
{
    int num;
    printf("Enter the interval\n");
    scanf("%d",&num);
    doPerfect(num);
}


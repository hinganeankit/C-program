#include<stdio.h>
void doPrime(int n)
{  int i,j,count;

for (i=1;i<=n;i++)
{
    count=0;
    for (j=1;j<=i;j++)
    {
        if (i%j==0)
        {
           count++;
        }
    }
       if (count==2)
       {
           printf("%d\n",i);
       }
}
}

main()
{
    int num;
    printf("Enter the interval\n");
    scanf("%d",&num);
    doPrime(num);
}

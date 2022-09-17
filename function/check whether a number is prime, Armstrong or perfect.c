#include<stdio.h>
void doPrime(int n)
{
    int i; int count=0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("%d is prime number\n",n);
    }
    else
    {
        printf("%d is not prime number\n",n);
    }
}
void doArmstrong(int n)
{
    int t,cube,rem,sum=0;
    t=n;
    while (n!=0)
    {
        rem=n%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        n=n/10;
    }
    if (sum==t)
    {
        printf("%d is armstrong number\n",t);
    }
    else
    {
         printf("%d is not armstrong number\n",t);
    }
}
void doPerfect(int n)
{
    int i ,sum=0;
    for (i=1;i<=n;i++)
    {
        if (i%n==0)
        {
            sum=sum+i;
        }
    }
    if (sum==n)
    {
        printf("%d is Perfect number\n",n);
    }
    else
    {
        printf("%d is not Perfect number\n",n);
    }

}

main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    doPrime(num);
    doArmstrong(num);
    doPerfect(num);
}

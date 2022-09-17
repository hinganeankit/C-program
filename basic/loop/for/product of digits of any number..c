#include<stdio.h>
main()
{
    int num;
    int reminder;
    int sum=1;
    printf("Enter the number \n");
    scanf("%d",&num);

    while (num>0)
    {
        reminder=num%10;
        sum=reminder*sum;
        num=num/10;
    }
    printf("The product is = %d",sum);
}

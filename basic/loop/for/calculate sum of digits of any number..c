#include<stdio.h>
main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    int reminder;
    int sum=0;

     while (num>0)
     {
         reminder= num%10;
         sum=reminder+sum;
         num=num/10;
     }
     printf("Sum of the digits is = %d",sum);
}

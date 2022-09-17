#include<stdio.h>
main()
{
    int num;
    int remendier;
    int sum=0;
    printf("Enter the num\n");
    scanf("%d",&num);

     while (num!=0)
     {
         remendier=num%10;
         sum=remendier*1;
         num=num/10;

         printf("%d",sum);

     }
}

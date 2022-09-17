#include<stdio.h>
main()
{
    int num;
    int remendier;
    int sum=0;
    printf("Enter the num\n");
    scanf("%d",&num);
     int x;
     x=num;

     while (num>0)
     {
         remendier=num%10;
         sum=remendier+(sum*10);
         num=num/10;
     }

        if (x==sum)
        {
             printf("The number is palindrome");
        }
        else
        {
              printf("The number is not palindrome");
        }



}



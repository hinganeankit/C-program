#include<stdio.h>
main()
{
    int num;
    int count=1;
    printf("Enter the number\n");
    scanf("%d",&num);
     while (num>=count)
     {
         if (num%count==0)
         {
             printf("the factors of the number is %d\n",count);
         }
         count=count+1;
     }
}

#include<stdio.h>
main()
{
    int x;
    int y;
    int a=1;
    int count=1;
    printf("Enter the number\n ");
    scanf("%d",&x);
    printf("Enter the power\n");
    scanf("%d",&y);

     while (count<=y)
     {
         a=a*x;
         count=count+1;
     }
     printf("The power of the number is = %d",a);


}

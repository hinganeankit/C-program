#include<stdio.h>
#include<math.h>

main()
{
     int num;
    printf("Enter the value\n");
    scanf("%d",&num);
    if (num%6==0)
    {
        printf("Following value is divisible by 6\n");
        int res= num/6;
        printf("the Quotient is = %d\n",res);
    }
    else
    {
        printf("Following value is not divisible by 6\n");
    }

    if (num%2==0)
    {
        printf("value is even\n");
    }
    else
    {
        printf("value is odd\n");
    }
    float num1=num;
    float res= sqrt(num1);
    printf("Square root is= %.3f",res);


}

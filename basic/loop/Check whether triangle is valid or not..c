#include<stdio.h>
main()
{
    int num;
    int num2;
    int num3;
    printf("Enter the first angle of triangle\n");
    scanf("%d",&num);
    printf("Enter the second angle of triangle\n");
    scanf("%d",&num2);
    printf("Enter the third angle of triangle\n");
    scanf("%d",&num3);

    int res= (num+num2+num3);
    if (res==180)
    {
        printf("The given value is creates a valid triangle\n ",res);
    }
    else
    {
        printf("The given value is not creates a valid triangle\n ",res);
    }
}

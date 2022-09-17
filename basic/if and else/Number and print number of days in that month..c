#include<stdio.h>
main()

{
    int num;
    printf("Enter the month number\n");
    scanf("%d",&num);

    if (num==1|| num==3|| num==5|| num==7|| num==8|| num==10|| num==12)
    {
        printf("The following month has 31 days\n");
    }
    else if(num==2)
    {
        printf("The following month has 28 days\n");
    }
    else
    {
        printf("The following month has 30 days\n");
    }
}

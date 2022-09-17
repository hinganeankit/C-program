#include<stdio.h>
main()
{
    int days;
    printf("Enter which day book is return\n");
    scanf("%d",&days);
    if (days<=5)
    {
       int res=(50);
       printf("Fine is %d paise",res);
    }
    if (days>=6&&days<=10)
    {
       int res= (days=1);
       printf("Fine is %d rupees",res);
    }
     if (days>=11&& days<=30)
    {
       int res= (days=5);
       printf("Fine is %d rupees",res);
    }
     if (days>30)
    {
       printf("Membership is cancelled");
    }
}


#include<stdio.h>
main()
{
    int x;
    int count=0;
    printf("Enter the value to count digit\n");
    scanf("%d",&x);
     for (x;x>0;count=count+1)
     {
         x=x/10;
     }
     printf("%d\n",count);
}

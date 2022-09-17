#include<stdio.h>
main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    switch (num%2==0)
    {
        case 1:
            printf("%d Is even number\n",num);
            break;
        case 0:
            printf("%d Is odd number",num);
            break;
    }
}

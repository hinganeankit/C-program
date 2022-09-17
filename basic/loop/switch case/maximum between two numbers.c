#include<stdio.h>
main()
{
    int x;
    int y;
    printf("Enter the both numbers\n");
    scanf("%d%d",&x,&y);

    switch (x>y)
    {
    case 1:
        printf("%d is maximum\n",x);
        break;
    case 0:
        printf("%d is maximum",y);
        break;
    }

}

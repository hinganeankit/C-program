#include<stdio.h>

main()

{
    int a;
    int b;
    printf("enter the valve of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    int res= 180-(a+b);
    printf("Third angle of the tringle = %d",res);
}

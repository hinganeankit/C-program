#include<stdio.h>

main()

{
    int length;
    int height;
    printf("enter the value of length\n");
    scanf("%d",&length);
    printf("enter the value of height\n");
    scanf("%d",&height);
    int res= 0.5*length*height;
    printf(" Area of triangle = %d",res);
}

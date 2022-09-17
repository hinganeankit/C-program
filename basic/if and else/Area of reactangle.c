#include<stdio.h>

main()

{
    int length;
    int breadth;
    printf("Enter the value of Length \n");
    scanf("%d",&length);
    printf("Enter the Value of Breadth\n");
    scanf("%d",&breadth);
    int res= length*breadth;
    printf("Ans is= %d", res);
}

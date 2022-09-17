#include<stdio.h>
main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n ");
    scanf("%d",&b);
    printf("Enter the value of c\n ");
    scanf("%d",&c);

    (a>b&&a>c) ? printf("a is greater is") : (b>c)? printf("b is greater is"):  printf("c is greater is");
}


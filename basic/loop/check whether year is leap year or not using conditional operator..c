#include<stdio.h>
main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);

    (a%4==0 && a%100!=0)? printf("Following year is leap year"):(a%400==0)? printf("Following year is leap year"): printf("Following year is not leap year");

}

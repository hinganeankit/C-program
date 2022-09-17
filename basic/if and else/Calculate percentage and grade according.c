#include<stdio.h>
main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int t;
    printf("Enter marks obtain in Physics\n",&a);
    scanf("%d",&a);
    printf("Enter marks obtain in Chemistry\n",&b);
    scanf("%d",&b);
    printf("Enter marks obtain in Biology\n",&c);
    scanf("%d",&c);
    printf("Enter marks obtain in Mathematics\n",&d);
    scanf("%d",&d);
    printf("Enter marks obtain in Computer\n",&e);
    scanf("%d",&e);
    printf("Enter total marks\n",&t);
    scanf("%d",&t);

    int res= (a+b+c+d+e)*100/t;
    if (res>=90)
    {
        printf(" Grade A and percentage is = %d\n",res);
    }
    else if (res>=80)
    {
        printf(" Grade B and percentage is = %d\n",res);
    }
    else if (res>=70)
    {
        printf(" Grade C and percentage is = %d\n",res);
    }
    else if (res>=60)
    {
        printf(" Grade D and percentage is = %d\n",res);
    }
    else if (res>=40)
    {
        printf(" Grade E and percentage is = %d\n",res);
    }
    else
    {
        printf(" Grade F and percentage is = %d\n",res);
    }
}

#include<stdio.h>

main()

{
    int Radius;
    printf(" value of radius \n");
    scanf("%d",&Radius);
    int Diameter= 2*Radius;
    printf("Diameter of circle is= %d\n",Diameter);
    int Circumference= 2*3.14*Radius;
    printf("Circumference of circle is= %d\n", Circumference);
    int Area= 3.14*Radius*Radius;
    printf("Area of circle is= %d", Area);

}

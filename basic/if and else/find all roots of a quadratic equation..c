#include<stdio.h>
#include<math.h>
main()
{
    float a;
    float b;
    float c;
    double r1,r2;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
     double deter= ((b*b)-(4*a*c));

     if (deter>0)
     {
         double sqx1= sqrt(deter);
         r1=((-b)+sqx1)/(2*a);
         r2=((-b)-sqx1)/(2*a);
     }
     else if (deter<0)
     {
           deter  = deter*(-1);
           double sqx2 = sqrt(deter);
           r1=((-b)+sqx2)/(2*a);
           r2=((-b)-sqx2)/(2*a);
     }
     else
     {
         r1 = (-b)/(2*a);
         r2 = (-b)/(2*a);
     }
         printf("x1 is %lf",r1);
         printf("x2 is %lf",r2);
}

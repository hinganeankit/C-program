#include <stdio.h>
main()
{
    int i;
    int j;

    for (i=5;i>=1;i--)
    {
        for (j=i;j>=1;j--)

          {
              if (i==1|| j==i|| j==1|| i==5)
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
          }
                  printf("\n");
    }
}



#include<stdio.h>
main()
{
    int n;
    int i;
    int res=1;
    printf("Enter the number\n");
    scanf("%d",&n);

    for (i=1;n>=i;i=i+1)
    {
     res=res*i;

    }printf("The factorial is %d\n",res);


}

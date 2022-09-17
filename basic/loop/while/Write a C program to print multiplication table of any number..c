#include<stdio.h>
main()
{
    int x=1;
    int n=10;
    int table;
    int res;
    printf("Enter the number for table\n");
    scanf("%d",&table);
    while (x<=n)
    {
        res= x*table;
        printf(" %d  * %d = %d \n",table,x,res);
        x=x+1;
    }
}

#include<stdio.h>
int findNumber (int i ,int j)
{
    if (i>j)
    {
        printf("%d is greater\n",i);
    }
     else if (i==j)
    {
        printf("%d is equal to %d \n",i,j);
    }

    else
    {
        printf("%d is greater\n",j);
    }
}
main()
{
    int num;
    int num1;

    printf("Enter Number 1\n");
    scanf("%d",&num);
     printf("Enter Number 2\n");
    scanf("%d",&num1);
    int get=findNumber(num,num1);

}

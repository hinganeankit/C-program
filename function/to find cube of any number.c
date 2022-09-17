#include<stdio.h>
int getCube(int c)
{
    int res=c*c*c;
    return res;
}




main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
int get=getCube(num);
printf("%d",get);

}

#include<stdio.h>
#include<string.h>
main()
{
    char arr[100];
    int i; int count=0;
    printf("enter the string\n");
    gets(arr);
    printf(" %s\n", arr);
    for (i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of string is %d",count);
}

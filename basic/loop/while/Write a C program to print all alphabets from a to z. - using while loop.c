#include<stdio.h>
main()
{
    char ch='A';

    while (ch>='A' && ch<='Z')
    {
        printf("%c\n",ch);
        ch= ch+1;
    }
}

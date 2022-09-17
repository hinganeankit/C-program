#include<stdio.h>
main()
{
    char x= 'a';

    for (x='a';x>='a' && x<='z';x=x+1)
    {
        printf("%c\n",x);
    }
}

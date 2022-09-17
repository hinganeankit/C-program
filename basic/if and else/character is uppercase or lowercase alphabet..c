
#include<stdio.h>
main()
{
    char ch;
    printf("Enter the following character\n");
    scanf("%ch",&ch);

    if (ch>='A'&& ch<='Z')
    {
        printf("The following character is Alphabet 'Uppercase' \n");
    }
    else
    {
        printf("The following character is Alphabet 'Lowercase' \n");
    }
}

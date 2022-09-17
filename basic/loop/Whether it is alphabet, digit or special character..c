#include<stdio.h>
main()
{
    char ch;
    printf("Enter the following character\n");
    scanf("%ch",&ch);

    if (ch>='A'&& ch<='Z')
    {
        printf("The following character is Alphabet 'capital' \n");
    }

    else if (ch>='a'&& ch<='z')
    {
        printf("The following character is Alphabet 'small' \n");
    }
     else if (ch>='0'&& ch<='9')
    {
        printf("The following character is Digit \n");
    }
    else
    {
        printf("The following is Special Character\n");
    }
}

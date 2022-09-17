#include<stdio.h>
main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%ch",&ch);
    (ch>='A'&& ch<='Z') ? printf("Following character is alphabet\n"): (ch>='a'&& ch<'z')? printf("Following character is alphabet"): (ch>='0' && ch<='9')? printf("Following character is digit"): printf("Following is special character");
}

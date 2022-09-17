#include<stdio.h>
main()
{
    char ch;
    printf("Enter the Character\n");
    scanf("%c",&ch);
    switch(ch=='a'|| ch=='i'|| ch=='o'|| ch=='e'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'
           || ch=='O' || ch=='U')
    {
    case 1:
        printf("Character is vowels\n",ch);
        break;

    case 0:
        printf("Character is consonant",ch);
        break;
    }



}

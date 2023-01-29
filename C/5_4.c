//5.4-character or digit or spe symbol
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is character", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit", ch);
    }
    else 
    {
        printf("'%c' is special symbol", ch);
    }

    return 0;
}
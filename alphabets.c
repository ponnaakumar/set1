#include <stdio.h>
int main()
{
    char c;
    scanf("%s",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
        printf("alphabet");
         }
else
{
        printf("not an alphabet");
}
    return 0;
}

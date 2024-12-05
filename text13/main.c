#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    int i,n;
    gets(ch);
    n=strlen(ch);
    for (i=n-1;i>=0;i--)
        printf("%c",ch[i]);
    return 0;
}

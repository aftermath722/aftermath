#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10];
    int max=ch[0];
    int i;
    scanf("%s",ch);
    getchar();
    for(i=0;i<10;i++){
    if(ch[i]>max)
        max=ch[i];}
        scanf("%c",&ch);
    printf("ASCII码最大的字符为:%c",ch[i]);
    return 0;
}

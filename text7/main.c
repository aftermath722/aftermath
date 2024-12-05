#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10];
    int i;
    printf("请输入一个字符串:\n");
    scanf("%s",ch);
    if(ch[i]==""){
        printf("空串");
    }
    else{
        printf("你输入的是:%s",ch);
    }
    return 0;
}

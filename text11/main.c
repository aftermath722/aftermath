#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("请输入天数:");
    scanf("%d",&t);
    int a,b;
    a=t/7;
    b=t%7;
    printf("%d周%d天",a,b);
    return 0;
}

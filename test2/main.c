#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=2,c=3;
    printf("输入三个整数:");
    int min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    printf("最小值是:%d\n",min);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=2,c=3;
    printf("������������:");
    int min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    printf("��Сֵ��:%d\n",min);


    return 0;
}

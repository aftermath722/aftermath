#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int t,pos_min=0,pos_max=0,neg_min=0,neg_max=0;
    for (t=0;t<20;t++);
    printf("请输入20个整数:");
    scanf("%d%d%d%d%d",t,pos_min,pos_max,neg_min,neg_max);
    if(t>0);{
        if(t<pos_min);
        t=pos_min;
        if(t>pos_max);
        t=pos_max;
    }
    if(t<0);{
        if(t<neg_min);
        t=neg_min;
        if(t>neg_max);
        t=neg_max;
    }


    }
    return 0;
}

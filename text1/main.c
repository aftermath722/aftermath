#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos,neg;
    float avg_pos,avg_neg;
    float sum_pos,sum_neg;
    pos=0;
    neg=0;
    avg_pos=0;
    avg_neg=0;
    sum_pos=0;
    sum_neg=0;
    int t;
    for(int i=0;i<20;i++){
        printf("�������%d����:",i+1);
        scanf("%d",&t);
        if(t>0){
            pos++;
            sum_pos+=t;
        }
        else if(t<0)
        {
            neg++;
            sum_neg+=t;
        }
    }
    avg_pos=sum_pos/(float)pos;
    avg_neg=sum_neg/(float)neg;
    printf("������������%d,������������%d,������֮�ͣ�%f,������֮�ͣ�%f,������ƽ��ֵ��%f,������ƽ��ֵ��%f",pos++,neg++,sum_pos,sum_neg,avg_pos,avg_neg);

    return 0;
}

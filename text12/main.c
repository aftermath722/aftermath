#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    (t>9)&&(t<100);
    printf("������һ����λ��:");
    scanf("%d",&t);
    int a,b,c;
    if(t%10!=0){
        a=t/10;
        b=t%10*10;
        c=a+b;
        printf("���%d",c);
    }
    else{
        a=t/10;
        c=a;
        printf("���%d%d",0,c);
    }
    return 0;
}

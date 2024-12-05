
//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,f,g,bei,num;
    char o;
    printf("start");
    while(scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)==5){
    f=b;g=d;
    int e=1;
    while(e!=0){
        e=f%g;
        f=g;g=e;
    }
    printf("e=%d",f);
    bei=b*d/f;
    printf("f=%d",bei);
    if(a<0 && b<0){
        fabs(a);fabs(b);
        printf("a=%d %d",a,b);
    }
    if(c<0 && d<0){
        fabs(c);fabs(d);
        printf("b=%d %d",c,d);
    }
    if(o=='+'){
        num=bei/b*a+bei/d*c;
        printf("c=%d",num);
    }
    if(o=='-'){
        num=bei/b*a-bei/d*c;
        printf("d=%d",num);
    }
    if(num==0){
        printf("0");
    }
    else if(num==bei){
        printf("1");
    }
    else {
        int A,B,t=1;
    A=num;B=bei;
    while(t!=0){
        t=A%B;A=B;B=t;
     printf("%d/%d",num/B,bei/B);
    }}

    }
    return 0;
}





















#include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
long GCD(long long int m,long long int n){
    long long int p=1;
    while(p!=0){
       p=m%n;
       m=n;
       n=p;
   }
   return m;
}
/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/
long LCM(long long int m,long long int n){
    return((m*n)/GCD(m,n));
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long int m,n,yue=0,bei=0;
    scanf("%d %d",&m,&n);
    if(m>0 && n>0){
    yue=GCD(m,n);
    bei=LCM(m,n);
    printf("%d %d",yue,bei);}
    else if(m<=0 || n<=0)
    {printf("Input Error");}
    /*********End**********/
    return 0;
}









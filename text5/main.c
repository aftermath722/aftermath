#include <stdio.h>
#include <stdlib.h>
#define N 7

int main()
{
    int a[N],i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=N;i++)
    printf("%3d",a[i]-a[i-1]);
    return 0;
}

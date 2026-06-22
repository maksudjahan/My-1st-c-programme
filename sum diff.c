#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b,sum,dif;
    int *pa = &a, *pb = &b;
    scanf("%d %d",&a,&b);
    sum=a+b;
    dif=abs(a-b);
    printf("%d\n%d",sum, dif);

    return 0;
}

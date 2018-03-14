#include<stdio.h>
int main()
{
    int a=37,b=73,t;
    printf("before swapping:%d %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("after swapping:%d %d",a,b);
    return 0;
}

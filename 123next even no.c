#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values:");
    scanf("%d",&a);
    b=++a;
    if(b%2==0)
    {
    printf("the next even num is:%d",b);
    }else
    {
        c=++b;
        printf("the next even no is:%d",c);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter the values:");
    scanf("%d",&a);
    b=--a;
    if(b%2==0)
    {
    printf("the previous even num is:%d",b);
    }
    else
    {
        c=--b;
        printf("the previous even no is:%d",c);
    }
    return 0;
}

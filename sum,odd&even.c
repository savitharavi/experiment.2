#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("the sum is:%d\n",c);
    if(c%2==0)
    {
        printf("the no is even");
    }else
    {
        printf("the no is odd");
    }
    
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c;
printf("enter the values:");
scanf("%d %d",&a,&b);
c=a+b;
if(c/2==0)
{
    printf("the result is even:%d",c);
}
else
{
    printf("the result is odd:%d",c);
}

    return 0;
    
}

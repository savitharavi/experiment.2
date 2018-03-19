#include<stdio.h>
#include<string.h>
int main()
{
int a,i,n=0;
printf("enter the no's:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    if(a%i==0)
    {
        n=n+1;
    }
    }if(n==2)
    {
        printf("the given no is prime:%d",a);
    }else
    {
        printf("the given no is not a prime:%d",a);
    }


    return 0;
    
}

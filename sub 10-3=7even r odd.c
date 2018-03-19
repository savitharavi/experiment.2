#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c;
printf("enter the no's:");
scanf("%d %d",&a,&b);
c=a-b;
    if(c%2==0)
    {
     printf("the given no is even :%d",c);
    }else
    {
        printf("the given no is odd:%d",c);
    }


    return 0;
    
}

#include <stdio.h>
int main()
{
int a,b=0;
printf("Enter the elements:");
scanf("%d",&a);
while(a!=0)
    {
    a/=10;
    ++b;
    printf("The digits is:%d\n",b);
        
    }
 return 0;
}

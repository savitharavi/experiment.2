#include <stdio.h>
int main()
{
    int n,i,a1=0,a2=1,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a1);
        t=a1+a2;
        a1=a2;
        a2=t;
    }
    return 0;
}

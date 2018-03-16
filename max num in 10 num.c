#include <stdio.h>

int main()
{
    int a[15],b,max,i,n,temp;
    printf("Enter the values:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    printf("the max no is%d",a[i]);
    
    return 0;
}

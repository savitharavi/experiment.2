#include <stdio.h>

int main()
{
    int i,j,max,count=0;
    int a[15];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j])
            {
                count=a[i];
                a[i]=a[j];
                a[j]=count;
            
                
            }
        }
    }
    printf("The maximum no is:%d",count);
	return 0;
}

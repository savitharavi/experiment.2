#include<stdio.h>
int main ()
{
    int a[50],min,max,i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        min=a[0];
        max=a[n-1];
        for(i=0;i<n;i++)
        {
            if(a[0]<min)
            {
                a[0]=min;
                
            }
            
        }for(i=0;i<n;i++)
        {
           if(a[i]>max)
            {
                a[i]=max;
                
            }
        }    
            printf("the minimum:%d",min);
           printf("the maximum:%d",max); 
           return 0;
    
        
    }

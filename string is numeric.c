#include<stdio.h>
#include<conio.h>
int main()
{
char a[20];
    int flag=0,n,i;
    printf("\nenter the string length");
    scanf("%d",&n);
    printf("enter the string");
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        if((int)a[i]>47 && (int)a[i]<58)
         flag++;
    }
    if(flag==0)
        printf("\nThe string has no numbers");
    if(flag>0)
        printf("The string has %d numbers",flag);
return 0;
}
 

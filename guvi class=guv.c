#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter string:");
    scanf("%[^n]s",a);
    int n=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
        printf("%c",a[i]);
        }
    }
    return 0;
    
}

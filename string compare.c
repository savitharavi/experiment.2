#include <stdio.h>
#include<string.h>
int main()
{
char str1[25],str2[25];
int m,n;
printf("Enter the str1:");
scanf("%s",str1);
printf("enter the str2:");
scanf("%s",str2);
m=strlen(str1);
n=strlen(str2);
if(m>n)
{
    printf("%s",str1);
}
else if(n>m)
{
printf("%s",str2);
}else
{
    printf("%s",str2);
}
 return 0;
}


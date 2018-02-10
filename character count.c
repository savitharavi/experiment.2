#include<stdio.h>
#include<string.h>
int main()
{
	char str[60];
	int a=0,i;
	printf("enter the string:");
    scanf("%[^\n]s",str);
    int l;
    l=strlen(str);
	for (i = 0; i<l; i++)
		if (str[i] != ' ')
		a++;
	printf("%d",a);
	return 0;
}

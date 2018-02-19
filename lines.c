#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[50];
   int i = 0, count=1,c;
   printf("Enter any string\n");
   scanf("%s",str);
for(i = 0; i <= count; i++)
   {
       if(i=='\n')
       {
    count = count + 1;
   }
   }
   printf("The number of lines in the string are %d", count);
return 0;
}


#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[50];
   int i = 0, l = 0;
   puts("Enter any string\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
}

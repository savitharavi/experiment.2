#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[50];
   int i = 0, a = 1;
   printf("Enter any string\n");
   scanf("%.2f",str);
for(i = 0; i <= a-1; i++)
   {
      if(str[i] == ' ')
      {
    a= a + 1;
      }
   }
   printf("The number of words in the string are %d", a);
}

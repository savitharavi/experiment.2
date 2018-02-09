 #include <stdio.h>

int main()
{
    int i=20,k=40;
    printf("\nvalues of i and k before swapping %d,%d\n",i,k);
   i=i^k;
   k=i^k;
   i=i^k;
   printf("\nvalues of i and k after swapping %d,%d\n",i,k);
   return 0;
}

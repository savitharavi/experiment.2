#include <stdio.h>
  int main() {
    int c[10];
    int i;
    int max;
    printf("Enter any ten values:");

    for (i = 0; i < 10; i++)
    {
    scanf(" the values are %d", &c[i]);
    }
    max = c[0];
    for (i=0;i<10;i++) {
if (c[i] > max) {
max = c[i];
    }
    }
    printf(" %d", max);
    return 0;
}

#include <stdio.h>
int main()
{
     int n = 20, sum = 0, i = 2;
     for (int i = 2; i <= n; i = i + 2)
     {
          printf(" %d", i);
          sum = sum + i;
     }
     printf("\nThe sum of even numbers: %d", sum);
}
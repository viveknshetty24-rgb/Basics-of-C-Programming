#include <stdio.h>
int main()
{
     int n, sum = 0;
     printf("Enter the number length:");
     scanf("%d", &n);
     for (int i = 1; i < n; i++)
     {
          printf(" %d", i);
          sum = sum + i;
     }
     printf("\nThe Sum of Odd Numbers is %d", sum);
}

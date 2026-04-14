#include <stdio.h>
int main()
{
     int n;
     printf("\nEnter the size of the array:");
     scanf("%d", &n);
     int a[n];
     printf("\nEnter the elements:");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("\nThe elements in the array are:");
     for (int i = 0; i < n; i++)
     {
          printf("\t %d", a[i]);
     }
     return 0;
}
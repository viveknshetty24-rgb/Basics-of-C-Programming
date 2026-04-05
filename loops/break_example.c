#include <stdio.h>
int main()
{
     int i;
     for (int i = 0; i <= 5; i++)
     {
          printf(" %d", i);
          if (i == 3)
          {
               break;
          }
     }
}
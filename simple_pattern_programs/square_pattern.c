#include <stdio.h>
int main()
{
     int rows, columns;
     printf("Enter the number of rows:");
     scanf("%d", &rows);
     printf("Enter the number of columns:");
     scanf("%d", &columns);
     if (rows == columns)
     {
          for (int i = 1; i <= rows; i++)
          {
               for (int j = 1; j <= columns; j++)
               {
                    printf("*");
               }
               printf("\n");
          }
     }
     else
     {
          printf("\n For A Square Number of Rows And Columns Should be Same!!");
     }
     return 0;
}

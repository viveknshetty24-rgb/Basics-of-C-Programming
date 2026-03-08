#include <stdio.h>
int main()
{
     float a,b;
     printf("Enter the first number:");
     scanf("%f", &a);
     printf("Enter the second number:");
     scanf("%f", &b);
     if(b==0){
          printf("!!Division by Zero");
     }
     else{
     printf("%.2f / %.2f = %.2f",a,b,a/b);
     }
     return 0;
}
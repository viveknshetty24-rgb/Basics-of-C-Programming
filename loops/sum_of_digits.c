#include<stdio.h>
int main(){
     int digits,n,sum=0;
     printf("Enter The Number:");
     scanf("%d",&n);
     do{
          digits= n%10;
          sum+=digits;
          n=n/10;
     }while(n!=0);
     printf("The sum of digits of the number is %d",sum);
     return 0;
}
#include<stdio.h>
int main(){
     int n;
     printf("\nEnter a number:");
     scanf("%d",&n);
           printf("The table of %d",n);
     for(int i=1;i<=10;i++){
          printf("\n%d X %d = %d",n,i,n*i);
     }
}
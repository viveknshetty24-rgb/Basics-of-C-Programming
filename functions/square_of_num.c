#include<stdio.h>
int square(int n){
     return n*n;
}
int main(){
     int a;
     printf("\nEnter a number:\n");
     scanf("%d",&a);
     printf("\nSquare of %d is %d",a,square(a));
}

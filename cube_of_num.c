#include<stdio.h>
int square(int n){
     return n*n*n;
}
int main(){
     int a;
     printf("\nEnter a number:\n");
     scanf("%d",&a);
     printf("\nCube of %d is %d",a,square(a));
}
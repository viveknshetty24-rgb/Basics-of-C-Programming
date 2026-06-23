#include<stdio.h>
int main(){
     int n;
     printf("Enter the size of the array:");
     scanf("%d",&n);
     int a[n];
     printf("\n Enter the array elements:\n");
     for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
     int product = 1;
     printf("\n The product of  Array elements:\n");
     for(int i=0;i<n;i++){
          product*=a[i];
     }
     printf("%d",product);
}
#include<stdio.h>
int main(){
     int n;
     printf("\nEnter the number of elements in array:");
     scanf("%d",&n);
     int a[n];
     printf("\nEnter the array elements:");
     for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
     printf("\nThe array elements are:");
     for(int i=0;i<n;i++){
          printf(" %d",a[i]);
     }
     printf("\nArray Elements in reversed order:");
     for(int i=n-1;i>=0;i--){
          printf(" %d",a[i]);
     }
     return 0;
}
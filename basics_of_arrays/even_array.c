#include<stdio.h>
int main(){
     int n;
     printf("\nEnter the size of the array:\n");
     scanf("%d",&n);
     int a[n];
     printf("\nEnter the elements:\n");
     for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
     printf("\nThe even array elements:\n");
     for(int i=0;i<n;i++){
          if(a[i]%2==0){
          printf("%d ",a[i]);
          }
     }
}
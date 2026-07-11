#include<stdio.h>
int main(){
     int n;
     printf("\nEnter the size of the array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("\nEnter the elements:\n");
     for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     int k;
     int count = 0;
     printf("\nElement to find:\n");
     scanf("%d",&k);
     printf("\nThe array elements are:\n");
     for(int i=0;i<n;i++){
          printf(" %d",arr[i]);
     }
     for(int i=0;i<n;i++){
          if(arr[i]==k){
               count++;
          }
     }
     printf("\nThe element %d occurs %d times in the array\n",k,count);
}
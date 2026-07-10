#include<stdio.h>
int main(){
     int n;
     int sum =0;
     printf("\nEnter the size of the array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("\nEnter the array elements:\n");
     for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++){
          if(arr[i]%2!=0){
               sum=sum+arr[i];
          }
     }
     printf("\nThe sum of odd elements of the array is:%d\n",sum);
}
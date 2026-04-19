#include<stdio.h>
int main(){
     int n,sum=0;
     printf("\nEnter the no of elements:");
     scanf("%d",&n);
     int a[n];
     printf("\nEnter the elements:");
     for(int i=0;i<n;i++){
          scanf(" %d",&a[i]);
     }
     for(int i=0;i<n;i++){
          sum+=a[i];
     }
     printf("\nThe sum of array elements is: %d",sum);
}
#include<stdio.h>
int main(){
     int a[5];
     int n;
     printf("\nEnter the size of the array:\n");
     scanf("%d",&n);
      if(n > 5) {
        printf("Array size cannot exceed 5");
        return 0;
    }
     printf("\nEnter the array elements:\n");
     for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
     int min=a[0];
     for(int i=0;i<n;i++){
          if(a[i]<min){
               min=a[i];
          }
     }
     printf("\n The smallest element in the array is %d\n",min);

}
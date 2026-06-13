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
     int max=a[0];
     for(int i=0;i<n;i++){
          if(a[i]>max){
               max=a[i];
          }
     }
     printf("\n The largest element in the array is %d\n",max);

}
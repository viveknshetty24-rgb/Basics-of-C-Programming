#include<stdio.h>
int main(){
     int n,m;
     printf("\nEnter the number of rows and columns:");
     scanf("%d %d",&n,&m);
     int a[n][m];
     printf("\nEnter the elements:");
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               scanf("%d",&a[i][j]);
          }
     }
     printf("\nThe array elements are: ");
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               printf("%d",a[i][j]);
          }
          printf("\n");
     }
}
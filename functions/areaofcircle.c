#include<stdio.h>
float area(int n){
     return 3.141*n*n;
}
int main(){
     int radius;
     printf("Enter the radius of the circle:");
     scanf("%d",&radius);
     area(radius);
     printf("The area of circle is %f",area(radius));
}
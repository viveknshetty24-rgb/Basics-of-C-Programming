#include<stdio.h>
int main(){
     int radius;
     float area;
     printf("Enter the radius of the Circle:");
     scanf("%d",&radius);
     area=3.14*radius*radius;
     printf("The area of the circle is %.2f",area);
     return 0;
}

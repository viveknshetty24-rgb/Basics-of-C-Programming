#include<stdio.h>
int main(){
    float area;
     float length,breadth;
     printf("Enter the length:");
     scanf("%f",&length);
     printf("Enter the breadth:");
     scanf("%f",&breadth);
     area=length*breadth;
     printf("Area of rectangle:%.2f",area);
     return 0;
}
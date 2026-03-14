#include<stdio.h>
int main(){
    float area;
     float length,breadth;
     printf("Enter the Length:");
     scanf("%f",&length);
     printf("Enter the Breadth:");
     scanf("%f",&breadth);
     area=length*breadth;
     printf("Area of Rectangle:%.2f",area);
     return 0;
}

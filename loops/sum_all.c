#include<stdio.h>
int main(){
     int n;
     int sum=0;
     int i=0;
     printf("enter the target:");
     scanf("%d",&n);
     do{
     sum=sum+i;
     i++;
     }while(i<=n);
     printf("The sum is :%d",sum);
}
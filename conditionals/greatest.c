#include<stdio.h>
int main(){
     int a,b,c,max=0;
     printf("Enter three Numbers:");
     scanf("%d %d %d",&a,&b,&c);
     if(a>=b&&a>=c){
          max=a;
     }
     else
     if(b>=c){
          max=b;
     }
     else{
          max=c;
     }
     printf("The greatest number is %d",max);
}
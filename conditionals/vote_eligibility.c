#include<stdio.h>
int main(){
     int age;
     char str[10];
     printf("Enter The Persons Name:");
     scanf("%s",str);
     printf("Enter The Persons Age: ");
     scanf("%d",&age);
     if(age>=18){
          printf("%s is eligible to vote because he is %d years old",str,age);
     }
          else{
          printf("%s is not eligible to vote because he is %d years old",str,age);
     }
     return 0;
}

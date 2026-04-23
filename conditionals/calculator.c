#include<stdio.h>
int main(){
     char operator;
     int num1,num2,result=0;
     printf("\nEnter Operator (+,-,*,/):");
     scanf(" %c",&operator);
     printf("\nEnter the First Number:");
     scanf("%d",&num1);
     printf("\nEnter the Second Number:");
     scanf("%d",&num2);
     switch(operator){
          case '+':result=num1+num2;
          printf("%d + %d = %d",num1,num2,result);
          break;
            case '-':result=num1-num2;
          printf("%d - %d = %d",num1,num2,result);
          break;
            case '*':result=num1*num2;
          printf("%d * %d = %d",num1,num2,result);
          break;
          case '/': if(num2==0){
             printf("!Division by Zero");
          }
          else{
            result=(float)num1/num2;
           printf("%d / %d = %d",num1,num2,result);
          }
          break;
          default:printf("Invalid Choice!!");
     }
     return 0;

}
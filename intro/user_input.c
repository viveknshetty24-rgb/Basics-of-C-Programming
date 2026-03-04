#include<stdio.h>
int main(){
     char str1[10];
     char str2[10];
     int sub1,sub2,sub3;
     int total;
     float percentage;
     printf("Enter Student Name:");
     scanf("%s",str1);
     printf("Enter Student USN:");
     scanf("%s",str2);
     printf("Enter 3 Subject marks\n");
     scanf("%d %d %d",&sub1,&sub2,&sub3);
     printf("Subject 1:%d\n",sub1);
     printf("Subject 2:%d\n",sub2);
     printf("Subject 3:%d\n",sub3);
     total=sub1+sub2+sub3;
     percentage=(float)total/300*100;
     printf("Total Percentage=%.2f",percentage);
}
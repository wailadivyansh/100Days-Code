//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
int y;
printf("Enter A Year\n");
scanf("%d" , &y);

if(y%400==0){
 printf("Is A Leap Year\n");
}
else if(y%100==0){
printf("Is not A Leap Year\n");
}
else if(y%4 == 0){
printf("Is A Leap Year\n");
}
else{
    printf("Is not a Leap Year");
}
    return 0;
}
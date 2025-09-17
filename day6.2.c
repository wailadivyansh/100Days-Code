//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
int a;
printf("eneter a Integer\n");
scanf("%d" , &a);
if(a>=0){
if(a==0){
    printf("Integer is Zero");
}
else{ printf("Integer is positive");
}
}
else{
printf("Integer is Negative");
}
}
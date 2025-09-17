//Write a program to input three numbers and find the largest among them using if–else
#include <stdio.h>
int main(){
int a,b,c;
printf("Enter First Digit\n");
scanf("%d" , &a);
printf("Enter Second Digit\n");
scanf("%d" , &b);
printf("Enter Third Digit\n");
scanf("%d" , &c);
if(a>b && a>c){
    printf("First is largest");
}
else if(b>a && b>c){
    printf("second is largest");
}
else {
    printf("c is largest");
}

    return 0;
}
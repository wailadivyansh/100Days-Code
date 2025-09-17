//Write a program to input a character and check whether it is a vowel or consonant using if–else
#include <stdio.h>
int main(){
char y;
printf("Enter A Character\n");
scanf("%c" , &y);

if(y=='a' ||y=='e'|| y=='i'|| y=='0'|| y=='u' || y=='A' || y=='E' || y=='I'|| y=='O' || y=='U'){
 printf("vowel\n");
}

else{
    printf(" Consonent");
}
    return 0;
}
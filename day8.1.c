//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(){
char c;
printf("enter a character\n");
scanf("%c" , &c);

if(c>=65 && c<= 90){
printf("Upper Case Letter");

}
else if(c>=97 && c<= 120){
printf("Lower Case Letter");
}
else if (c>='0'&& c<='9'){
    printf("Is A number");
}
else{
    printf("Is A special Chracter");
}
    return 0;
}
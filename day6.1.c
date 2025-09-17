//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
int a;
printf("eneter a Integer\n");
scanf("%d" , &a);
if (a%2==0){
 printf("%d is Even", a);
}
else {printf("%d is Odd", a);
}



    return 0;
}
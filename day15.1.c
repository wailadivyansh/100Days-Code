//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int a,b;
   long long product=1;
    printf("Enter A No.");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
  product=product*b;
    }
    printf("%d Factorial is %lld",a,product);
    return 0;
}

//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int a,b=0,c;
    printf("Enter the NO:\n");
    scanf("%d",&a);
   while(a!=0){
      c=a%10;
      b=b*10+a;
      a=a/10;
   }
    printf("%d",b);
    
    return 0;
}
//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter A and B\n");
    scanf("%d %d",&a, &b);
    printf("Enter Operation(+,-,*,/,%%)\n");
    scanf(" %c",&c);
 switch(c){
    case '+':
  printf("Answer:-%d\n", a+b);
  break;
  case '-':
  printf("Answer:-%d\n",a-b);
  break;
   case '*':
  printf("Answer:-%d\n",a*b);
  break;
   case '/':
  printf("Answer:-%d\n",a/b);
  break;
   case '%':
  printf("Answer:-%d\n",a%b);
  break;
  default:
   printf("Invalid Operation\n");
 }
    return 0;
}
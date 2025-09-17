//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter a\n");
    scanf("%d" , &a);
    printf("Enter b\n");
    scanf("%d" , &b);
    printf("Enter c\n");
    scanf("%d" , &c);
    int B=powf(b,2);
    int d=B-4*a*c;
    int D=sqrt(d);
    int x= (-b+D)/2*a;
    int y=(-b-D)/2*a;
    if(x!=y){
printf("%d , %d Roots are diffrent\n"  , x ,y);
    }
    else if(x==y){
printf("%d , %d Roots Are Same\n" , x ,y);
    }
    else{
        printf("roots are comples");
    }
    return 0;
}
//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
float a;
float b;
float c;
printf("Enter First Side A\n");
scanf("%f" , &a);
printf("Enter First Side B\n");
scanf("%f" , &b);
printf("Enter First Side C\n");
scanf("%f" , &c);
if(a==b && b==c && c==a){
    printf("Triangle is a Equilateral\n");
}
else if (a==b || b==c || c==a ){
    printf("Triangle is a Isosceles\n");
}
else{
    printf("Triangle is a Scalene\n");
}
    return 0;
}
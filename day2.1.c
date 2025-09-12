//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){

float L,B;

printf("enter the Length");

scanf("%f", &L);

printf("enter the Breadth");

scanf("%f", &B);

printf ("perimeter of rectangel:-%f \n" , 2*(L+B) );
printf("Area of Rectangle:- %f\n" ,L*B);

return 0;

}

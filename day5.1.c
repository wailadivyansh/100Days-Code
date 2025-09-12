//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main(){
    float p ,r ,t ;
printf("enter principal value:-\n");
scanf("%f",&p);

printf("enter Rate:-\n");
scanf("%f",&r);

printf("enter Time:-\n");
scanf("%f",&t);

float a=1+r/100.0;
float b=powf(a,t);
float A=p*b;
float c=A-p;

printf(" Simpel Intrest :-%f \n" , (p*r*t)/100);

printf(" Compound Intrest :-%f \n" , c);

    return 0;
}
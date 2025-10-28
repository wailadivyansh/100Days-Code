#include <stdio.h>
#include <limits.h>
int main(){
    long long num,rem;
    long long r=0;
    long long x,y=0,z;
    printf("Enter a Number:-\n");
    scanf("%lld",&num); 
    do{
rem=num%2;
r=r*10+rem;
num=num/2;
    }while( num != 0);
    printf("%lld",r);
    z=r;
    do{
x=z%10;
y=y*10+x;
z=z/10;
    }while(z != 0);
    printf("Binary is :-%lld",y);
    return 0;
}
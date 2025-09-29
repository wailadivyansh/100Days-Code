//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
int a,c;
long long b=1;
printf("Enter a  No. :\n");
scanf("%d",&a);
for(c=2;c<a;c=c+2){
printf("%d\t",c);
b=b*c;
}
printf("\n");
printf("product of even no. from 1 to %d is %lld",a,b);
return 0;
}

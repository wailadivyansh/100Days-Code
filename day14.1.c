//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int a,i=1,c=0;
    printf("Enter Number of Odd No. you Want:-\n");
    scanf("%d",&a);
    do{
        printf("%d\n", i);
        c++;
        i=i+2;
 
    }while(c<a);
    printf("Sum of odd Numbers %d ",a*a);

    return 0;
}
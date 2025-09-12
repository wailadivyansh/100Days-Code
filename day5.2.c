//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
   int a;
    printf("Enter Time In Seconds\n");
    scanf("%d",&a);
   int h=a/(3600);
    int m=(a%3600)/60;
    int s=a%60;
    printf("%d:%d:%d",h,m,s);

    return 0;
}
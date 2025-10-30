//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int a,b=0,i;
    printf("Enter a no. :- \n");
    scanf("%d",&a);
    /*if(a==0 || a == 1){
printf("%d is not a Prime No. \n",a);
    }*/
    for(i=1 ; i<=a ; i++){
        if(a%i==0){
            b++;
            
        }
    }
    if(b==2){
        printf("%d is a prime no \n",a);
    }
    else{
        printf("%d is not a prime no\n",a);
    }
    return 0;
}
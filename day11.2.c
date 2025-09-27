//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float cp;
    float sp;
    printf("Enter Cost Price (CP)\n");
    scanf("%f",&cp);
    printf("Enter Selling Price (CP)\n");
    scanf("%f",&sp);
    float p=sp-cp;
    float l=cp-sp;
    if(sp>cp){
        printf("profit is %.3f%%" , (p/cp)*100);
    }
    else if (cp>sp){
        printf("Loss is %.3f%%" , (l/cp)*100);
    }
    else {
        printf("No Profit no Loss ");
    }
    return 0;
}
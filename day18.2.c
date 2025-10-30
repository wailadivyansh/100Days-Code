#include <stdio.h>
int i,j;
int fact(int a , int b){
    for( i=1 ; i<=a && i<=b ; i++ ){       
if(a%i==0 && b%i==0){
    j=i;
}
}
}
int main(){
    
    int a,b;
    
    printf("Enter a NO A:-");
    scanf("%d",&a);
    
  printf("Enter a No B:-");
    scanf("%d",&b);

    fact(a , b);

    printf("GCD OF %d  AND %d IS %d",a,b,j);

    return 0;
}
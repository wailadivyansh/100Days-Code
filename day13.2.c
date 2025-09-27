//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int a,i=0;
    printf("Enter The Numers:-\n");
    scanf("%d",&a);
    do{
      i=i+1;
      printf("%d\n",i);
    }while(i<a);
    return 0;
}
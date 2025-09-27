/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main(){
int a;
printf("Enter the Days:-\n");
scanf("%d",&a);

if(a<=5){
    printf("Fine:-Rs. ₹%d",a*2);
}
else if (a<=10){
printf("fine :- ₹%d",(5*2)+((a-5)*4));
}
else if (a<=30){
printf("fine :- ₹%d",(5*2)+((10-5)*4)+((a-10)*6));
}
else{
    printf(" Membership Cancelled.");
}

return 0;

}
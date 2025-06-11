#include <stdio.h>
int main(){
float principle, rate, time;
printf("A SIMPLE SIMPLE INTREST CALCULATOR!!\n");
printf("Enter the principle amount: ");
scanf("%f", &principle);
printf("Enter the rate of intrest: ");
scanf("%f", &rate);
printf("Enter the time(IN YEARS): ");
scanf("%f", &time);
printf("The Total Amount Will Be: %f", principle*rate*time/100 + principle);
return 0;
}

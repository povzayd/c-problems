#include <stdio.h>
#include <math.h>
int main(){
float principle, rate, time, compound;
//
printf("A SIMPLE SIMPLE INTREST CALCULATOR!!\n");
printf("Enter the principle amount: ");
scanf("%f", &principle);
printf("Enter the rate of intrest: ");
scanf("%f", &rate);
printf("Enter the time(IN YEARS): ");
scanf("%f", &time);
//result = pow(rate/100, time)
compound = (pow(rate/100 + 1, time) * principle);

//compound= principle((1 + (rate/100))**time);
printf("The Total Amount Will Be: %f", compound);
return 0;
}


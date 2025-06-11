#include <stdio.h>
int main(){
float celsius,farenheit;
printf("CELSIUS TO FARENHIET CONVERTER\n");
printf("Enter Temprature in Celsius: ");
scanf("%f", &celsius);
farenheit = (celsius * 9/5 + 32); 
printf("THE TEMPRATURE IN FARENHEIT WILL BE :%f", farenheit);
return 0;

}

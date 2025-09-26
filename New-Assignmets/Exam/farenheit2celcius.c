#include <stdio.h>
int main(){
float faren;
printf("Farenheit to Celsius Convertor\n");
printf("Enter the Temprature in Farenheit: ");
scanf("%f", &faren);
printf("The Temp In C will be %f", (faren-32)*5/9);
return 0;
}

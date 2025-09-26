#include <stdio.h>
#include <math.h>
int main(){
double num1, num2;
printf("===Basic Aritematic Operations===\n");
printf("Enter First Number: ");
scanf("%lf", &num1);
printf("Enter Second Number: ");
scanf("%lf", &num2);
printf("The Result Of The Arithemtic Operation's is: ");
printf("%lf + %lf = %lf\n", num1, num2, (num1 + num2));
printf("%lf - %lf = %lf\n", num1, num2, (num1 - num2));
printf("%lf * %lf = %lf\n", num1, num2, (num1 * num2));
printf("%lf / %lf = %lf\n", num1, num2, (num1 / num2));
printf("%lf % %lf = %d\n", num1, num2, ((int)num1 % (int)num2));
return 0;
}

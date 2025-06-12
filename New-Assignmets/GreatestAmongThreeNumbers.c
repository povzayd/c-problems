#include <stdio.h>
int main(){
float num1, num2, num3;
printf("Greatest Of All Three\n");
printf("Enter 1st Number: ");
scanf("%f", &num1);
printf("Enter 2nd Number: ");
scanf("%f", &num2);
printf("Enter 3rd Number: ");
scanf("%f", &num3);
if (num1 > num2 && num1 > num3){
printf("The Number %f is Greatest.", num1);
}
else if (num2 > num1 && num2 > num3)
{
printf("The Number %f is Greatest.", num2);
}
else if (num3 > num1 && num3 > num2) 
{
printf("The Number %f is Greatest.", num3);
}
else {
printf("You naughty naughty!!!");
}
return 0;
}

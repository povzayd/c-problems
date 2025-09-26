#include <stdio.h>
int main(){
char oper;
int num1,num2;
printf("CALCULATOR!!\n");
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
printf("Enter The Operation You Want To Perform(+,-,*,/,%): ");
scanf(" %c", &oper);
switch(oper){
case '+':
printf("%d + %d = %d", num1, num2, (num1 + num2));
break;
case '-':  
printf("%d - %d = %d", num1, num2, (num1 - num2));
break; 
case '*':  
printf("%d * %d = %d", num1, num2, (num1 * num2));
break; 
case '/':  
printf("%d / %d = %f", num1, num2, ((float)num1 / (float)num2));
break; 
case '%':  
printf("%d % %d = %d", num1, num2, (num1 % num2));
break; 
default:
printf("Hamse chalaki!!");
}
return 0;
}


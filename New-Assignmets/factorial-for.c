#include <stdio.h>
int main(){
int num;
unsigned long long fact = 1;
printf("FACTORIAL CALCULATOR\n");
printf("Enter a number: ");
scanf("%d", &num);
for(int i =1; i <= num; i ++){
fact *= i ;
}
printf("The factorial of the number %d is %d", num, fact);
return 0;
}

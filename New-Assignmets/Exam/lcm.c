#include <stdio.h>
int main(){
int num1,num2;
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
int min = num1 > num2 ? num1 : num2;
int max = num1*num2;
for(int i = min;i < max; i++){
if(i % num1 == 0 && i % num2 == 0){
printf("THE LCM OF %d & %d is %d", num1, num2, i);
break;
}
}

}

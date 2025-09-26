#include <stdio.h>
int main(){
unsigned long long fact = 1;
int num;
printf("Enter A Number: ");
scanf("%d", &num);
int i = 1;
while(i <= num){
fact = i*fact;
i++;
}
printf("THE FACTORIAL OF %d Is: %d", num,fact );
return 0;
}

#include <stdio.h>
int main(){
int num, sum = 0;
do{
printf("Enter A Number: ");
scanf("%d", &num);
sum += num;
if(num == 0){
break;
}
}
while(num != 0);
printf("The Sum Of Numbers Will Be %d", sum);
return 0;
}

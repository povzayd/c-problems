#include <stdio.h>
int main(){
int first, second, temp;
printf("Enter First Number: ");
scanf("%d", &first);
printf("Enter Second Number: ");
scanf("%d", &second); 
temp = first;
first = second;
second = temp;
printf("The Value of first is %d & second is %d", first, second);
return 0;

}

#include <stdio.h>
void swap(int a, int b){
int temp = a;
a = b;
b = temp;
printf("1st no. = %d\n", a);
printf("2nd no. = %d\n", b);
}
int main(){
int x,y;
printf("Enter 1st number: ");
scanf("%d", &x);
printf("Enter 2nd number: ");
scanf("%d", &y);
swap(x,y);
printf("1st no. = %d\n", x);
printf("2nd no. = %d\n", y);
return 0;
}

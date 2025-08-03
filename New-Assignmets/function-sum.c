#include <stdio.h>
int sum(int x, int y){
int add = (x + y);
return (add);
}
int main(){
int a, b;
printf("Enter 1st No.: ");
scanf("%d", &a);
printf("Enter 2nd No.: ");
scanf("%d", &b);
printf("Sum of the Numbers %d + %d is %d", a, b, sum(a,b));
}

#include <stdio.h>
int sum(int a, int b, int c, int d){
int add = a + b + c + d;
return add;
}
int main(){
int w,x,y,z;
printf("Enter 1st number: ");
scanf("%d", &w);
printf("Enter 2nd number: ");
scanf("%d", &x);
printf("Enter 3rd number: ");
scanf("%d", &y);
printf("Enter 4th number: ");
scanf("%d", &z);
printf("SUM OF %d, %d, %d, %d is %d", w, x, y, z, sum(w,x,y,z));

}

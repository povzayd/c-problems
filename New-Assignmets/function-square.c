#include <stdio.h>
int square(int n){
int sq = n * n;
return sq;
}
int main(){
int num;
printf("SQUARE CALCULATOR!\n");
printf("Enter a random number: ");
scanf("%d", &num);
printf("Square of %d is %d", num, square(num));
}

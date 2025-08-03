#include <stdio.h>
int main(){
int i = 3;
int *j;
j = &i;
printf("Address of i: %p\n", &i);

printf("Value at j: %d\n", *j);
printf("Address of j: %p", j);
}

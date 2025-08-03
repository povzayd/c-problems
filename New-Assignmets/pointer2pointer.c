#include <stdio.h>
int main(){
int v = 10;
int *p1 = &v;
int **p2 = &p1;
printf("Address of v is: %p", *p2);
}

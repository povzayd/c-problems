#include <stdio.h>
int main ()
{
int a = 1;
float b = 2.5;
double c = 344.555;
char d = 'Z';
printf("%zu\n",sizeof(a));
printf("%zu\n",sizeof(b));
printf("%zu\n",sizeof(c));
printf("%zu\n",sizeof(d));
return 0;
}

#include <stdio.h>
int main (){
double len,wid,area;
printf("Rectangle/Square Area Calculator\n");
printf("Enter The Length: ");
scanf("%lf", &len);
printf("Enter The Width: ");
scanf("%lf", &wid);
area=(len*wid);
printf("The Area Is %lf",area);
return 0;
}

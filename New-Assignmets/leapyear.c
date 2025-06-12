#include <stdio.h>
int main(){
int year, leap;
printf("Enter The Year You Are Curious About: ");
scanf("%d", &year);
if (year % 4 == 0){
printf("The Given Year %d Is A Leap Year.", year);
}
else{
printf("The Given Year %d Is Not A Leap Year.", year);
}
return 0;
}

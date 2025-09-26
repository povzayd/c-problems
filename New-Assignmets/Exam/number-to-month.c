#include <stdio.h>
int main(){
int num;
printf("Enter The Number To Get The Month: ");
scanf("%d", &num);
switch(num){
case 1:
printf("The Month Is January.");
break;

case 2:
printf("The Month Is Febaruary.");
break;

case 3:
printf("The Month Is March.");
break;

case 4:
printf("The Month Is April.");
break;

case 5:
printf("The Month Is May.");
break;

case 6:
printf("The Month Is June.");
break;

case 7:
printf("The Month Is July.");
break;

case 8:
printf("The Month Is August.");
break;

case 9:
printf("The Month Is September.");
break;

case 10:
printf("The Month Is October.");
break;
case 11:
printf("The Month Is November.");
break;
case 12:
printf("The Month Is December.");
break;
default:
printf("BADMOSI NHI MITR!! ASLA HUM BHI RAKHTE HAI PEHELWAAN!!");
break;
}
return 0;
}

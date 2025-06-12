#include <stdio.h>
int main(){
int age;
printf("Enter your AGE: ");
scanf("%d", &age);
if (age > 60 ){
printf("You Are A Senior Citizen :)");
}
else if (age < 13){
printf("You Are A Child :)");
}
else if (age < 20 && age > 13){ 
printf("You Are A Teen :)");
}
else if (age < 60 && age > 20){ 
printf("You Are An Adult :)");
}
return 0;
}


#include <stdio.h>
int main(){
int num;
printf("Check If The Number Is Odd Or Even\n");
printf("Enter A Number: ");
scanf("%d", &num);
if (num % 2 == 1){
printf("THE GIVEN NUMBER IS ODD.");
}
else{
printf("THE GIVEN NUMBER IS EVEN.");
}
return 0;

}

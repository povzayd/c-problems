#include <stdio.h>
int main(){
int array[5];
for(int i = 0; i < 5; i++){
printf("Enter the Marks for student %d: ", i+1);
scanf("%d", &array[i]);
}
for(int i = 0; i < 5; i++){
printf("Marks for student %d: %d\n", i+1, array[i]);
}
return 0;

}

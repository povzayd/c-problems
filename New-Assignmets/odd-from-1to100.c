#include <stdio.h>
int main(){
for(int i = 0; i <= 100; i++){
//printf("%d\n", i);
if(i % 2 == 0){
continue;
}
printf("%d\n", i);
}
return 0;
}

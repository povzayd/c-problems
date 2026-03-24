#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int array[5] = {1,2,3,4,5};
	int item, i = 0;
	printf("Enter The Item You Want To Search: ");
	scanf("%d", &item);
	while(i<5){
		if (array[i] == item){
			printf("Item Found!");
			return 0;
		}
		++i;
	}
	if (i >= 5)
	{
		printf("Item Not Found");
	}
	
	return 0;
}
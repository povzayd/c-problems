#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* RANDOM DICE NUMBER*/ 
int dice_num(){
	int x = 0;
	x = rand() % 6 + 1;
	return x;
}
/*MAIN GAME FUNCTION REWARD 3x Loss balance - 1x*/
void game(){
	int balance = 1000;
	int bet = 0, dice = 0, guess = 0;
	do{
		printf("HOW MUCH YOU WANT TO BET: ");
		scanf("%d", &bet);
		if((bet<=balance) && (bet>0)){
			printf("Enter a number to bet on[1-6]: ");
			scanf("%d", &guess);
			if((guess > 6) || (guess < 0)){
				printf("INVALID Choice. Enter a number between 1-6.\n");
			}
			else if(guess == 0){
				printf("Sorry to see you go. See you soon.");
				fflush(stdout);
				exit(0);
			}
			else{
				dice = dice_num();
				printf("Throwing the dice.");
				fflush(stdout);
				sleep(1);
				printf(".");
				fflush(stdout);
				sleep(1);
				printf(".");
				fflush(stdout);
				sleep(1);
				printf(".\n");
				fflush(stdout);
				if(guess == dice){
				printf("DICE: %d \n", dice);
				printf("You Won!! \n");
				balance = balance + 3*bet; 
				printf("NEW BALANCE: %d \n", balance);
			}else{
				printf("DICE: %d \n", dice);
				printf("You Lost!! \n");
				balance = balance - bet;
				printf("NEW BALANCE: %d \n", balance);
				if(balance ==0){
					printf("You Are Bankrupt!");
					sleep(2);
					exit(0);
				}
			}
		}
		}
		else{
			printf("Not Enough Balance Or You Are Entering A Negative Value.\n");
		}
	}
	while(balance>0);
}
// CHOICES FUNCTION
void choices(){
	int choice;
	do{
	printf("Enter 1 to START. Enter 2 to read the rules. Enter 0 to quit.\n");
	sleep(0.5);
	printf("CHOICE: ");
	fflush(stdout);
	scanf("%d", &choice);
	if(choice==1)
	{
		game();
	}
	else if(choice==2)
	{
		printf("\n================ RULES ================\n");
		printf("1. Bet a valid amount from your balance.\n");
        printf("2. Pick a number between 1 and 6.\n");
        printf("3. Correct guess wins 3x your bet value.\n");
        printf("4. Incorrect guess loses your bet value.\n");
        printf("=======================================\n");
		fflush(stdout);
	}
	else if(choice==0)
	{
		printf("Sorry to see you go. See you soon.");
		exit(0);
	}
	else{
		printf("INVALID CHOICE.\n");
		
	}
	} while(1);
}
void start(){
	printf("=+=WELCOME=TO=THE=BET=STUDIO=+=\n");
	fflush(stdout);
	sleep(2);
	printf("You have been given a bonus of $1000.\n");
	sleep(0.5);
	printf("This game is highly addictive play responsibly. \n");
	sleep(0.5);
	choices();
}
int main(){
	srand(getpid());
	start();
	return 0;
}

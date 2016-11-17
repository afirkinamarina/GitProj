#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(void)
{
	int number_rand, num1, nStartValue = time(NULL);
	srand(nStartValue);
	number_rand = rand() % 100;
	printf("Guess the number.");
	while (true)
	{
		printf("\nEnter the number: \n");
		scanf("%i", &num1);
		if (num1 == number_rand)
		{
			printf("\nYes, you guessed it!");
			break;
		}
		else if (num1 < number_rand)
		{
			printf("\nNo, greater.");
		}
		else 
		{
			printf("\nNo, less.");
		}
	}
	getch();
	return 0;
}
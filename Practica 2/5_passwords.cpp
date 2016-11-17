#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	int const len = 10;
	int choose;
	srand(time(NULL));
	char exchange, newstring[100];
	for (int k = 0; k<100; k++)
	{
		choose = rand() % 3;
		switch (choose)
		{
		case 0:
			exchange = rand() % ('z' - 'a') + 'a';
			newstring[k] = exchange;
			break;
		case 1:
			exchange = rand() % ('Z' - 'A') + 'A';
			newstring[k] = exchange;
			break;
		default:
			exchange = rand() % ('9' - '0') + '0';
			newstring[k] = exchange;
		}
	}
	char pass1[20], pass2[20], pass3[20], pass4[20], pass5[20], pass6[20], pass7[20], pass8[20], pass9[20], pass10[20];
	strncpy(pass1, newstring, 10);
	pass1[10] = 0;
	printf("%s", pass1);

	strncpy(pass2, newstring+10, 10);
	pass2[10] = 0;
	printf("\n%s", pass2);

	strncpy(pass3, newstring + 20, 10);
	pass3[10] = 0;
	printf("\n%s", pass3);

	strncpy(pass4, newstring + 30, 10);
	pass4[10] = 0;
	printf("\n%s", pass4);

	strncpy(pass5, newstring + 40, 10);
	pass5[10] = 0;
	printf("\n%s", pass5);

	strncpy(pass6, newstring + 50, 10);
	pass6[10] = 0;
	printf("\n%s", pass6);

	strncpy(pass7, newstring + 60, 10);
	pass7[10] = 0;
	printf("\n%s", pass7);

	strncpy(pass8, newstring + 70, 10);
	pass8[10] = 0;
	printf("\n%s", pass8);

	strncpy(pass9, newstring + 80, 10);
	pass9[10] = 0;
	printf("\n%s", pass9);

	strncpy(pass10, newstring + 90, 10);
	pass10[10] = 0;
	printf("\n%s", pass10);
		
	getchar();
	return 0;
}

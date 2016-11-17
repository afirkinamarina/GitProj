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
	//record each password in an array
	char pass1[20], pass2[20], pass3[20], pass4[20], pass5[20], pass6[20], pass7[20], pass8[20], pass9[20], pass10[20];
	strncpy(pass1, newstring, len);
	pass1[len] = 0;
	printf("%s", pass1);

	strncpy(pass2, newstring+10, len);
	pass2[len] = 0;
	printf("\n%s", pass2);

	strncpy(pass3, newstring + 20, len);
	pass3[len] = 0;
	printf("\n%s", pass3);

	strncpy(pass4, newstring + 30, len);
	pass4[len] = 0;
	printf("\n%s", pass4);

	strncpy(pass5, newstring + 40, len);
	pass5[len] = 0;
	printf("\n%s", pass5);

	strncpy(pass6, newstring + 50, len);
	pass6[len] = 0;
	printf("\n%s", pass6);

	strncpy(pass7, newstring + 60, len);
	pass7[len] = 0;
	printf("\n%s", pass7);

	strncpy(pass8, newstring + 70, len);
	pass8[len] = 0;
	printf("\n%s", pass8);

	strncpy(pass9, newstring + 80, len);
	pass9[len] = 0;
	printf("\n%s", pass9);

	strncpy(pass10, newstring + 90, len);
	pass10[len] = 0;
	printf("\n%s", pass10);
		
	getchar();
	return 0;
}

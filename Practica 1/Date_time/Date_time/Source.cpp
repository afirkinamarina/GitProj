
/*#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int length = 0;
	int pospos = 0;
	int posarrays[10] = { 0,1,3,4,6,7 };
	int pos = posarrays[pospos];
	char mask[9] = "**:**:**";
	char *istr;
	char sep[2] = ":";
	printf("%s", mask);
	while (length != 6)
	{
		int ch = getch();
		if (ch >= '0' && ch <= '9')
		{
			length++;
			mask[pos] = ch;
			system("cls");
			pospos++;
			pos = posarrays[pospos];
			printf("%s", mask);
		}
	}
	istr = strtok(mask, sep);
	int b;
	b = atoi(istr);
	if (b <= 10 && b >= 5)
		printf("\n Good morning\n");
	else if (b >= 11 && b <= 16)
		printf("\n Good afternoon\n");
	else if (b >= 17 && b <= 22)
		printf("\n Good evening\n");
	else if (b >= 23 && b <= 24)
		printf("\n Good night\n");
	else if (b >= 0 && b <= 4)
		printf("\n Good night\n");
	getchar();
	return(0);
	}
	*/
	#include <conio.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>

	int main()
 {
		while (true) {
			int length = 0;
			int pospos = 0;
			int posarrays[10] = { 0,1,3,4,6,7 };
			int pos = posarrays[pospos];
			char mask[9] = "**:**:**";
			char *istr;
			char sep[2] = ":";
			printf("%s", mask);
			while (length != 6)
			{
				int ch = getch();
				if (ch >= '0' && ch <= '9')
				{
					length++;
					mask[pos] = ch;
					system("cls");
					pospos++;
					pos = posarrays[pospos];
					printf("%s", mask);
				}
			}
			istr = strtok(mask, sep);
			int b;
			b = atoi(istr);
			if (b <= 10 && b >= 5)
				printf("\n Good morning\n");
			else if (b >= 11 && b <= 16)
				printf("\n Good afternoon\n");
			else if (b >= 17 && b <= 22)
				printf("\n Good evening\n");
			else if (b >= 23 && b <= 24)
				printf("\n Good night\n");
			else if (b >= 0 && b <= 4)
				printf("\n Good night\n");
			getchar();
			
		}
		return(0);
	}

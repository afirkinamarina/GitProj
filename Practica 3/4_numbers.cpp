#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int sum = 0;
	char ex[5] = "", num[100] = "", str[300] = "", empty[100] = "";
	printf("Enter string:\n");
	fgets(str, 100, stdin);
	printf("The sum of the numbers in the string:\n");
	char exchange2;
	for (int j = 0; j < strlen(str); j++)
		if (str[j] >= '0' && str[j] <= '9')
		{
			ex[0] = str[j];
			strcat(num, ex);
			if (strlen(num) == 5)
			{
				sum = sum + atoi(num);
				strcpy(num, empty);
			}

			if ((str[j+1] < '0' || str[j+1] > '9')||(isspace(str[j + 1])))
			{
				sum =sum+ atoi(num);
				strcpy(num, empty);
			}

		}
	printf("%i\n", sum);
	getch();
	return 0;
}
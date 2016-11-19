#include <stdio.h>
int main()
{
	int const n = 300;
	char t[300] = "", str[300] = "";
	int counter = 0, counter1 = 0;
	printf("Input string: ");
	fgets(str, n, stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{
		counter = 1;
		for (int k = 0; str[k] != '\0'; k++)
		{
			if (str[i] == str[k])

			{
				counter++;
			}
		}
		counter1 = 0;
		for (int k = (i+1); str[k] != '\0'; k++)
		{
			if (str[i] == str[k])
				counter1++;
		}
		if ((counter1 < 1) && (str[i] != '\n'))
			printf("|%c |%i |\n", str[i], counter - 1);
	}
	getchar();
	return 0;
}
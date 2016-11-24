#include <stdio.h>
#include <stdlib.h>
int main()
{
	int const n = 300;
	char str[300] = "";
	int q = 0, razn = 0, max = 0, counter = 0, counter1 = 0, arr2[] = { 0 };
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
			if (counter>max)
				max = counter;
		}
		counter1 = 0;
		for (int k = (i + 1); str[k] != '\0'; k++)
		{
			if (str[i] == str[k])
				counter1++;
		}
		if ((counter1 < 1) && (str[i] != '\n'))
		{
			arr2[q] = counter;
			q++;
		}

	}
	for (int i = 0; str[i] != '\0'; i++)
	{
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
			for (int k = (i + 1); str[k] != '\0'; k++)
			{
				if (str[i] == str[k])
					counter1++;
			}
			if ((counter1 < 1) && (str[i] != '\n') && (counter == max))
			{
				printf("|%c |%i |\n", str[i], counter - 1);
			}
		}
		max = max-1;
	}
	getchar();
	return 0;
}
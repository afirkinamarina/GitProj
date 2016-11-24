#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str[300] = "";
	int test = 0, len = 0, counter = 0, counter1 = 0, id = 0, c=0;
	printf("Enter the string: ");
	fgets(str, 300, stdin);
	printf("Enter the num: ");
	scanf_s("%i", &test);
	if (!isspace(str[0]))
		test = test--;
	printf("\n");
	for (int i = 0; i < strlen(str); i++)
	{
		if (!isspace(str[i]))
		{
			if (counter == test)
			{
				id = i;
				counter1++;
			}
			len++;
			if (isspace(str[i + 1]))
			{
				len = 0;
			}
		}
		if (isspace(str[i]) && !isspace(str[i + 1]))
			counter++;
		else if (isspace(str[i]) && !isspace(str[i + 1]))
			i++;
	}
	while (c != counter1+1)
	{
		for (int i = (id - counter1 + 1); i < strlen(str); i++)
		{
			str[i] = str[i + 1];
		}
		c++;
	} 
    for (int i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	getchar();
	getchar();
	return 0;
}

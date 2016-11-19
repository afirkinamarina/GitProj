#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int main()
{
	char str[300] = "";
	int counter = 0;
	printf("Enter the string: ");
	fgets(str, 300, stdin);
	printf("Words:\n\n");
	for (int i = 0; i < strlen(str); i++)
	{
		if (!isspace(str[i]))
		{
			printf("%c", str[i]);
			if (isspace(str[i+1]))
				printf("\n");
		}
		if (isspace(str[i]) && !isspace(str[i + 1]))
			counter++;
		else if (isspace(str[i]) && !isspace(str[i + 1]))
			i++;
	}
	if (isspace(str[0]))
		printf("\nThe number of words: %i", counter - 1);
	else
		printf("\nThe number of words: %i", counter);
	getchar();
	return 0;
}
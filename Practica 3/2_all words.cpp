#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int main()
{
	char str[300] = "";
	int len = 0, counter = 0;
	printf("Enter the string: ");
	fgets(str, 300, stdin);
	char *s = str;
	printf("Words:\n\n");
	while (*s)
	{
		if (!isspace(*s))
		{
			printf("%c", *s);
			len++;
			if (isspace(*(s + 1)))
			{
				printf(" %i simbols.\n", len);
				len = 0;
			}
		}
		if (isspace(*s) && !isspace(*(s + 1)))
			counter++;
		else if (isspace(*s) && !isspace(*(s + 1)))
			*s++;
		*s++;
	}
	if (isspace(str[0]))
		printf("\nThe number of words: %i", counter - 1);
	else
		printf("\nThe number of words: %i", counter);
	getchar();
	return 0;
}


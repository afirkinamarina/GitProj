#include <stdio.h>
#include <string.h>
int main() 
{
	char s[100] = "";
	int i = 0, id = 0, max = 0, count = 0, len = 0, count2 = 0;
	printf("Enter the string\n");
	fgets(s, 100, stdin);
	char *ss = s;
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ')
			count++;
		else 
		{
			if (count > max)
			{
				max = count;
				id = i - count;
			}
			count = 0;
		}
	}
	if (count > max) 
	{
		max = count;
		id = i - count;
	}
	max = max+id;
	printf("The longest word:\n\n");
	for (i = id; i < max; i++)
	{
		putchar(s[i]);
		count2++;
	}
	if (s[max+2] == '\0')
		printf("\nSize - %i symbols.", count2-1);
	else 
		printf("\nSize - %i symbols.", count2);
	getchar();
	return 0;
}
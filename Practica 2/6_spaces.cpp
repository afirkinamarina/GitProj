#include  <stdio.h>
#include <locale.h>
#include <string.h>

int main() 
{
	setlocale(LC_ALL, "");
	char str[101] = "";
	printf("Enter the string:");
	fgets(str, 101, stdin);
	int g = 0;
	while (str[g] == ' ')
	{
		if (str[g] == ' ')
		{
			for (int j = 0; j < strlen(str); j++)
			{
				str[j] = str[j + 1];
			}
		}
	}

	for (int i = 0; i<strlen(str); i++) 
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] == ' ')
			{
				for (int k = (i + 1); k < strlen(str); k++)
				{
					str[k] = str[k + 1];
					i = 0;
				}
				continue;
			}
		}
	}
	printf("\nCorrect string:%s", str);
	getchar();
}

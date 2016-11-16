#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int size = 80;
	char str[80];
	printf("Please enter a string:\n");
	scanf("%s", &str);
	int length = strlen(str);
	int i, spase = (size - length) / 2;
	for (i = 0; i < spase; i++)
	{
		printf(" ");
	}
	printf("%s", str);
	for (i = spase + length; i < size; i++)
	{
		printf(" ");
	}
	getch();
	return 0;
}
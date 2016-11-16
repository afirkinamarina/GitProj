#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ch;
	float a, b, c, metr;

	printf("\n\t Enter your gender (m/f):");
	scanf("%c", &ch);
	if ((ch == 'f') || (ch == 'm'))
	{
		printf("\t Enter your weight: ");
		scanf_s("%f", &a);
		printf("\t Enter your height (cm): ");
		scanf_s("%f", &b);
		metr = b / 100;
		c = a / (metr * metr);
		printf("\t IMT=%1.2f", c);
		if (ch == 'f')
		{
			if ((c > 19) && (c < 24))
			{
				printf("\n\t Your weight is normal ");
			}
			if (c < 19)
			{
				printf("\n\t You need to gain weight");
			}
			if (c > 24)
			{
				printf("\n\t You need to lose weight");
			}
		}
		else
			if (ch == 'm')
			{
				if ((c > 19) && (c < 25))
				{
					printf("\n\t Your weight is normal");
				}
				if (c < 19)
				{
					printf("\n\t You need to gain weight");
				}
				if (c > 25)
				{
					printf("\n\t You need to lose weight");
				}
			}
	}
	else
		printf("\n\t Wrong gender");
	getchar();
	getchar();
	return(0);
}
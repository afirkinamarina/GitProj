#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ch[2];
	float a, b, c, metr;	

	printf("\n\t Gender (m/f):");
	gets_s(ch);
	printf("\t Weight: ");
	scanf_s("%f", &a);
	printf("\t Height: ");
	scanf_s("%f", &b);

	metr = b / 100;
	c = a / (metr * metr);
	printf("\t IMT=%1.2f", c);

	if (ch == "f") 
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
		if (ch == "m")
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
	getchar(); 
	getchar();
	return(0);
}
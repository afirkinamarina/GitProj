#include <conio.h>
#include <stdio.h>
int main()
{
	while (true)
	{
		int ft, inch;
		float cm;
		printf("\n Enter your height like ft'inch''(example: 4'10''): ");
		scanf("%d'%d''", &ft, &inch);
		cm = (ft * 12 + inch)*2.54;
		printf("\n Height in centimeters = %.1f cm \n", cm);
		getch();
	}
	return 0;
}
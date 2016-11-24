#include <conio.h>
#include <stdio.h>
int main()
{
    const float coefficient = 12, coeff = 2.54;
	int ft, inch;
	float cm;
	printf("\n Enter your height like ft'inch''(example: 4'10''): ");
	scanf("%d'%d''", &ft, &inch);
	cm = (ft * coefficient + inch)*coeff;
	printf("\n Height in centimeters = %.1f cm \n", cm);
	getch();
	return 0;
}
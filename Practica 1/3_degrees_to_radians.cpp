#include<stdio.h>
#include <conio.h>
int main()
{
	const float pi = 3.14;
	float ang;
	char meas;
	printf("\n Enter the angle in radians or degrees (example: 90D or 1.57R): ");
	scanf("%f%c", &ang, &meas);
	if (meas == 'D' || meas == 'd')
	{
		printf("R=%1.2f \n", pi / 180 * ang);
	}
	else if (meas == 'R' || meas == 'r')
	{
		printf("D=%1.2f \n", 180 / pi*ang);
	}
	else
	{
		printf("The angle is measured in R or D!");
	}
	getch();
	return 0;
}
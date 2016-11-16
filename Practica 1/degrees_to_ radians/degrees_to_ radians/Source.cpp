#include<stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	while (1)
	{
		float ang, pi;
		char meas;
		pi = 3.14;
		printf("\n Enter the angle in radians or degrees (example: 90D or 1.57R): ");
		scanf("%f%c", &ang, &meas);
		if (meas == 'D' || meas == 'd')
		{
		printf("R=%1.2f \n Press enter to continue.", pi / 180 * ang);
		}
		else 
			if (meas == 'R' || meas == 'r')
			{
				 printf("D=%1.2f \n Press enter to continue.", 180 / pi*ang);
			}
			else 
			{
			printf("The angle is measured in R or D! Press enter to continue.");
			}
		getch();
	}
	return 0;
}
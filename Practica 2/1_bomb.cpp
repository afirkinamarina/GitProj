# include <stdio.h>
# include <math.h>
# include <conio.h>
# include <time.h>
# define DELAY 500
int main()
{
	int i;
	const float g = 9.81;
	float height, way, time, height2;
	printf("\n Enter the height: ");
	scanf("%f", &height);
	time = sqrt(2 * height / g);
	time = floor(time);
	clock_t now, delay;
	height2 = height;
	for (i = 0; i < time+1; i++)
	{
		way = (g*(i*i)) / 2;
		height2 = height - way;
		now = clock();
		while (clock() < now + DELAY);
		printf("\n t=%isec  h=%1.1fm", i, height2);
	}
	printf("\n BABAH!!!");
	getch();
	return 0;
}


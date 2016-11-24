#include <stdio.h>
int main()
{
    const int n = 300;
	char str[n] = "";
	int counter = 0, counter1 = 0;
	printf("Input string: ");
	fgets(str, n, stdin);
	for (int i = 0; str[i] != '\0'; i++)
	{
		counter1 = 0;
		for (int k = (i+1); str[k] != '\0'; k++)
		{
			if (str[i] == str[k])
				counter1++;
		}
        if ((counter1 < 1) && (str[i] != '\n'))
        {
            counter = 0;
            for (int k = 0; str[k] != '\0'; k++)
            {
                if (str[i] == str[k])
                    counter++;
            }
            printf("|%c |%i |\n", str[i], counter);
        }
	}
	getchar();
	return 0;
}
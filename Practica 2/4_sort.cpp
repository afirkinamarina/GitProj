#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	//line generation
    const int len = 8;
	int choose;
	srand(time(NULL));
    char exchange, newstring[len] = "", newstring1[len] = "", ex[2] = "", empty[len] = "";
	for (int k = 0; k<len; k++)
	{
		choose = rand() % 2;
		switch (choose)
		{
		case 0:
			exchange = rand() % ('z' - 'a') + 'a';
			newstring[k] = exchange;
			break;
		default:
			exchange = (rand() % ('9' - '0') + '0');
			newstring[k] = exchange;
			break;
		}
	}
	char newstr[11];
	strncpy(newstr, newstring, 11);
	newstr[len] = 0; //newstr - the resulting string
	printf("String:\n%s\n", newstr);
	printf("Grouped string:\n");
	char exchange2;
	//permutation of characters
	for (int i = 0; i < len; i++)
		if (newstr[i] < '0' || newstr[i] > '9')
		{
            exchange2 = newstr[i];
            ex[0] = exchange2;
			strcat(newstring1, ex);
		}
	for (int j = 0; j <len; j++)
		if (newstr[j] >= '0' && newstr[j] <= '9')
		{
            exchange2 = newstr[j];
            ex[0] = exchange2;
            strcat(newstring1, ex);
		}
    printf ("%s",newstring1);
	getchar();
	return 0;
}
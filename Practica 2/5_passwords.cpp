#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    char s1[10][8];
    int count1 = 0, count2 = 0, count3 = 0, choose, passlenght = 8;
    srand(time(NULL));

    for (int i = 0; i<10; i++)
    {
        for (int k = 0; k<8; k++)
        {
            choose = rand() % 3;
            switch (choose)
            {
            case 0:
                s1[i][k] = rand() % ('z' - 'a') + 'a';
                count1++;
                putchar(s1[i][k]);
                break;
            case 1:
                s1[i][k] = (rand() % ('Z' - 'A') + 'A');
                count2++;
                putchar(s1[i][k]);
                break;
            case 2:
                s1[i][k] = (rand() % ('9' - '0') + '0');
                count3++;
                putchar(s1[i][k]);
            }
        }
        printf(" mal%i, bol%i, cifr%i\n", count1, count2, count3);

        if (count1 == 0 || count2 == 0 || count3 == 0)
        {
            i--;
            continue;
        }

        count1 = 0;
        count2 = 0;
        count3 = 0;
    }
    putchar('\n');
    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<8; j++)
            putchar(s1[i][j]);
        putchar('\n');
    }
    getchar();
    return 0;

}
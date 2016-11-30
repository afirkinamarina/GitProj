#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define DELAY 1000
#define H 20
#define W 42

int main()
{
    while (true)
    {
        clock_t now, delay;
        now = clock();
        int h = 10;
        int w = 20;
        int i, j;
        int row, col;
        int number, posh, posw;
        h = 10;
        w = 20;
        srand(time(NULL));
        char array[H][W];

        for (i = 0; i < H; ++i)
            for (j = 0; j < W; ++j)
                array[i][j] = ' ';
        number = (H * W) / 10;
        ((H * W) % 10) > 5 ? ++number : number;

        while (number)
        {
            posh = rand() % (H + 1);
            posw = rand() % (W + 1);
            if (array[posh][posw] == ' ')
            {
                array[posh][posw] = '*';
                --number;
            }
        }

        for (int i = 0; i <= h; i++)
        {
            for (j = 0; j <= (w / 2); j++)
            {
                char tmp = array[i][j];
                array[i][j + 21] = array[i][w - j];
                array[i][w - j + 21] = tmp;
            }
        }

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < W; j++)
                printf("%c", array[i][j]);
            putchar('\n');
        }

        for (int i = 0; i < h / 2; i++)
        {
            for (int j = 0; j < W; j++)
            {
                char x = array[h - i - 1][j];
                array[h - i - 1][j] = array[i][j];
                array[i][j] = x;
            }
        }

        for (i = 0; i < h; ++i)
        {
            for (j = 0; j < W; ++j)
                printf("%c", array[i][j]);
            putchar('\n');
        }

        while (clock() < now + DELAY);
        {
            system("cls");
            for (i = 0; i < H; ++i)
                for (j = 0; j < W; ++j)
                    array[i][j] = ' ';
        }
    }
    getchar();
    return 0;
}
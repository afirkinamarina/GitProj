#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#define DELAY 1000

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
        char array[20][42];
        
        for (i = 0; i < 20; ++i)
            for (j = 0; j < 40; ++j)
                array[i][j] = ' ';
        number = (20 * 40) / 10;
        ((20 * 40) % 10) > 5 ? ++number : number;
        
        while (number) 
        {
            posh = rand() % (20 + 1);
            posw = rand() % (40 + 1);
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
            for (j = 0; j < 42; j++)
                printf("%c", array[i][j]);
            putchar('\n');
        }


        for (int i = 0; i < h / 2; i++)
        {
            for (int j = 0; j < 42; j++)
            {
                char x = array[h - i - 1][j];
                array[h - i - 1][j] = array[i][j];
                array[i][j] = x;
            }
        }
        for (i = 0; i < h; ++i)
        {
            for (j = 0; j < 42; ++j)
                printf("%c", array[i][j]);
            putchar('\n');
        }


        while (clock() < now + DELAY);
        {
            system("cls");
            for (i = 0; i < h; ++i)
            {
                for (j = 0; j < 42; ++j)
                    array[i][j] = NULL;
            }
        }
    }
    getchar();
    return 0;
}

/*

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
int h = 10;
int w = 20;
int i, j;
int row, col;
int number, posh, posw;

if (argc == 3 && atoi(argv[1]) && atoi(argv[2])) {
h = atoi(argv[1]);
w = atoi(argv[2]);
}
else if (argc == 1) {
h = 10;
w = 20;
}
else
return 1;

srand(time(NULL));
char array[20][40];

for (i = 0; i<h; ++i)
for (j = 0; j<w; ++j)
array[i][j] = ' ';

number = (h * w) / 10;
((h * w) % 10) > 5 ? ++number : number;
while (number) {
posh = rand() % (h + 1);
posw = rand() % (w + 1);
if (array[posh][posw] == ' ') {
array[posh][posw] = 'x';
--number;
}
}

for (i = 0; i<h; ++i) {
for (j = 0; j<w; ++j)
printf("%c", array[i][j]);
putchar('\n');
}
putchar('\n');
putchar('\n');
putchar('\n');
putchar('\n');
for (int i = 0; i < h / 2; i++)
{
for (int j = 0; j < w; j++)
{
char x = array[h - i - 1][j];
array[h - i - 1][j] = array[i][j];
array[i][j] = x;
}
}
for (i = 0; i<h; ++i)
{
for (j = 0; j<w; ++j)
printf("%c", array[i][j]);
putchar('\n');
}

for (i = 0; i <= h; i++) {
for (j = 0; j <= (w / 2); j++) {
char tmp = array[i][j];
array[i][j] = array[i][w - j];
array[i][w - j] = tmp;
}
}
for (i = 0; i<h; ++i)
{
for (j = 0; j<w; ++j)
printf("%c", array[i][j]);
putchar('\n');
}

getchar();
return 0;
}
*/
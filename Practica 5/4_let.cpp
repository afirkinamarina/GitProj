#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define N 100

void chomp(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}
int main()
{
    int i = 0, x, y;
    char str[N], str1[N], *ptr[50];
    printf("Enter a line of the text\n");
    fgets(str, N, stdin);
    chomp(str);
    ptr[i] = strtok(str, " ");
    while (ptr[i] != NULL)
    {
        i++;
        ptr[i] = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++)
    {
        strcpy(str1, ptr[j]);
        x = 1 + rand() % (strlen(str1) - 2);
        y = 1 + rand() % (strlen(str1) - 2);

        if (x != y)
        {
            char tmp = str1[x];
            str1[x] = str1[y];
            str1[y] = tmp;
        }
        printf("%s ", str1);
    }
    getchar();
    return 0;
}

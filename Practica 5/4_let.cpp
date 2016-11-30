#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define N 100
#define LEN 100

void chomp(char buf[]);
int funct2(char *str);

int main()
{
    FILE *mf;
    char *pc[N], str[N][LEN];
    int k = 0;
    char *estr;

    printf("Open : ");
    mf = fopen("D:/test.txt", "r");

    if (mf == NULL)
    {
        printf("Error\n");
        getchar();
        return -1;
    }
    else
        printf("Ok\n");

    printf("Strings: \n");
    while (1)
    {
        estr = fgets(str[k], sizeof(str[k]), mf);
        chomp(str[k]);
        funct2(estr);
        if (estr == NULL)
        {
            if (feof(mf) != 0)
            {
                printf("\nFile end\n");
                break;
            }
            else
            {
                printf("\nError\n");
                break;
            }
        }
        printf("\n");
        pc[k] = str[k];
        k++;
    }
    printf("Close : ");
    if (fclose(mf) == EOF) printf("error\n");
    else printf("ok\n");

    getchar();
    return 0;
}


void chomp(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}

int funct2(char *str)
{
    int i = 0, x, y;
    char str1[N], *ptr[50];
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
    return 0;
}
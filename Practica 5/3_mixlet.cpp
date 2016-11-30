#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define N 100
#define LEN 100

void chomp(char buf[]);
int funct1(char *ptr[50], int i);
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
int funct1(char *ptr[50], int i)
{
    char  parr[N] = { 0 };
    int dup_flag;
    int rand_val;
    for (int j = 0; j < i; j++)
    {
        for (; ; )
        {
            rand_val = rand() % i;
            dup_flag = 0;
            for (int k = 0; k < j; k++)
            {
                if (rand_val == parr[k])
                {
                    dup_flag = 1;
                    break;
                }
            }
            if (!dup_flag)
            {
                break;
            }
        }
        parr[j] = rand_val;
        printf("%s ", ptr[rand_val]);
    }
    return 0;
}
int funct2(char *str)
{
    int i = 0;
    char *ptr[50];
    ptr[i] = strtok(str, " ");
    while (ptr[i] != NULL)
    {
        i++;
        ptr[i] = strtok(NULL, " ");
    }
    funct1(ptr, i);
    return 0;
}

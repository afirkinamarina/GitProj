#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
void chomp(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}
int funct1(char *ptr[50], int i)
{
    char  parr[100] = { 0 };
    int dup_flag;
    int rand_val;
    for (int j = 0; j<i; j++) {
        for (; ; ) 
        {
            rand_val = rand() % i ;
            dup_flag = 0;
            for (int k = 0; k<j; k++)
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
int main()
{
    char str[100];
    printf("Enter a line of the text\n");
    fgets(str, 100, stdin);
    chomp(str);
    funct2(str);
    getchar();
    return 0;
}

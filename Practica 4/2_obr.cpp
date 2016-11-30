#include <stdio.h>
#include <string.h>
#define N 100
#define M 50
void chomp(char buf[]);
int main()
{
    int i = 0;
    char str[N], *ptr[M];
    printf("Enter a line of the text\n");
    fgets(str, N, stdin);
    chomp(str);
    ptr[i] = strtok(str, " ");
    while (ptr[i] != NULL)
    {
        i++;
        ptr[i] = strtok(NULL, " ");
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%s ", ptr[j]);
    }
    getchar();
    return 0;
}
void chomp(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}

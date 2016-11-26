#include <stdio.h>
#include <ctype.h>
#include <string.h> 
#define N 256
int funct(char *arr);
int main() 
{
    char m, str[N];
    int counter = 0, maximum = 0;
    printf("Please, enter string:\n");
    fgets(str, N, stdin);
    maximum = funct(str);
    char *s = str;
    while (*s)
    {
        if (*s == *(s+1))
            counter++;
        if (counter == (maximum - 1))
        {
            m = *s;
        }
        if (*s != *(s + 1))
            counter = 0;
        *s++;
    }
    printf("The longest:\n");
    for (int j = 0; j < maximum; j++)
    {
        printf("%c", m);
    }
    printf("\nLength:\n");
    printf("%i", maximum);
    getchar();
    return 0;
}

int funct(char *arr)
{
    int count = 0;
    int max = 0;

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
        if (count > max)
            max = count;
        if (arr[i] != arr[i + 1])
            count = 0;
    }
    return (max + 1);
}

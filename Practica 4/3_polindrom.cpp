#include <stdio.h>
#include <string.h>
#define N 80

int main(void)
{
    char str[N], *beg, *end;
    int size, count = 0;
    float size2;
    gets_s(str);
    size = strlen(str) - 1;
    beg = &str[0];
    end = &str[size];

    for (int i = 0; i < size; i++)
    {
        if (*beg != *end)
        {
            printf("\n No");
            break;
        }
        else
            count++;
        beg++;
        end--;
    }

    if (count>(size / 2))
        printf("\n Yes");

    getchar();
    return 0;
}
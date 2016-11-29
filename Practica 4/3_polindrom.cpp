#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main(void)
{
    char str[80], *beg, *end;
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
 if (count> (size/2 ))
     printf("\n Yes");


        getchar();
        return 0;
}
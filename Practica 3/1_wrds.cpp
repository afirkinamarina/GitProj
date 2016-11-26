#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int main()
{
    char str[100] = "";
    int counter = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    char *s = str;
    while (*s)
    {
        if (isspace(*s) && !isspace(*(s+1)))
            counter++;
        else if (isspace(*s) && !isspace(*(s+1)))
            *s++;
        *s++;
    }
    if (isspace(str[0]))
        printf("The number of words: %i", counter - 1);
    else
        printf("The number of words: %i", counter);
    getchar();
    return 0;
}
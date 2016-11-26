#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int funct(char *str, int test);
int main()
{
    char str[300] = "";
    int test = 0, len = 0, counter = 0;
    printf("Enter the string: ");
    fgets(str, 300, stdin);
    printf("Enter the num: ");
    scanf_s("%i", &test);
    if (!isspace(str[0]))
        test = test--;
    printf("Word:\n");
    counter = funct(str, test);
    if (test >= counter)
    {
        if (isspace(str[0]))
            counter--;
        rewind(stdin);
        printf("No more then %i!\nTry again:\n", counter);
        scanf_s("%i", &test);
        if (!isspace(str[0]))
            test = test--;
        funct(str, test);
    }
    getchar();
    getchar();
    return 0;
}
int funct(char *str, int test)
{
    int len = 0, counter = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]))
        {
            if (counter == test)
            {
                printf("%c", str[i]);
            }
            len++;
            if (isspace(str[i + 1]))
            {
                len = 0;
            }
        }
        if (isspace(str[i]) && !isspace(str[i + 1]))
            counter++;
        else if (isspace(str[i]) && !isspace(str[i + 1]))
            i++;
    }
    return (counter);
}



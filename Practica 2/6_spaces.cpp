#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() 
{
    const int len = 101;
    char str[len] = "";
    printf("Enter the string:");
    fgets(str, len, stdin);
    for (int i = 0; i<strlen(str); i++) 
    {
        while (str[0] == ' ')
        {
            for (int j = 0; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
        }  
      if ((str[i] == ' ') && (str[i + 1] == ' '))
        {
            for (int k = (i + 1); k < strlen(str); k++)
            {
                str[k] = str[k + 1];
                i = 0;
            }
            continue;
        }
    }
    printf("\nCorrect string:%s", str);
    getchar();
    return 0;
}

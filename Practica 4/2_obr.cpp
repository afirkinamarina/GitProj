#include <stdio.h>
#include <ctype.h>
#include <string.h>
void chomp(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}
int main()
{
    int i = 0;
    char str[100], *ptr[50];
    printf("Enter a line of the text\n");
    fgets(str, 100, stdin);
    chomp(str);
    ptr[i]= strtok(str, " ");
    while (ptr[i] != NULL)
    {
        i++;
        ptr[i] = strtok(NULL, " ");
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%s ", ptr[j]);
    } 
    getchar();
    return 0;
}

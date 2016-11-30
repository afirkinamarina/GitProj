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
int main()
{
    int i = 0, x, y;
    char str[100], str1[100], *ptr[50];
    printf("Enter a line of the text\n");
    fgets(str, 100, stdin);
    chomp(str);
    ptr[i] = strtok(str, " ");
    while (ptr[i] != NULL)
    {
        i++;
        ptr[i] = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++)
    {
     strcpy(str1, ptr[j]);
     x =1+rand() % (strlen(str1)-1);
     y =1+rand() % (strlen(str1)-1);

     if (x != y)
     {
         char tmp = str1[x];
         str1[x] = str1[y];
         str1[y] = tmp;
     }
     printf("%s ",str1);
    }
    getchar();
    return 0;
}

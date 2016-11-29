#include <stdio.h>
#include <string.h>
#define N 100
#define LEN 100

int main()
{
    FILE *mf;
    char *pc[N], str[N][LEN];
    int k = 0;
    char *estr;

    printf("Open : ");
    mf = fopen("D:/test.txt", "r");

    if (mf == NULL) 
    {
        printf("Error\n");
        getchar();
        return -1; 
    }
    else 
        printf("Ok\n");

    printf("Strings: \n");
    while (1)
    {
        estr = fgets(str[k], sizeof(str[k]), mf);

        if (estr == NULL)
        {
            if (feof(mf) != 0)
            {
                printf("\nFile end\n");
                break;
            }
            else
            {
                printf("\nError\n");
                break;
            }
        }
        printf("%s", str[k]);
        pc[k] = str[k];
        k++;
    }
    printf("Close : ");
    if (fclose(mf) == EOF) printf("error\n");
    else printf("ok\n");

    char *tmp;
    bool result;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < (k - i) - 1; j++) 
        {
            if (strlen(pc[j]) > strlen(pc[j + 1])) 
            {
                tmp = pc[j];
                pc[j] = pc[j + 1];
                pc[j + 1] = tmp;
            }
        }
    }
    char * fileName = "D:/test2.txt";
    FILE * file = fopen(fileName, "w");
    if (file) 
    {
        for (int i = 0; i < k; i++)
        {
            printf("%s", pc[i]);
            result = fputs(pc[i], file);
        }
        if (!result)
            printf("Ok");
    }
    else
        printf("Error");
    fclose(file);
    getchar();
    return 0;
}
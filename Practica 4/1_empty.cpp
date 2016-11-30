#include <string.h>
#include <stdio.h>
#define N 100
#define LEN 80

int main(void)
{
    int t, k;
    char *pc[N], str[N][LEN];
    printf("Enter the strings.\n");
    for (k = 0; k < N; k++)
    {
        printf(">");
        gets_s(str[k]);
        pc[k] = str[k];

        if (!*str[k])
            break;
    }
    pc[k] = NULL;

    char *temp;

    for (int i = 0; i< k - 1; i++)
        for (int j = 0; j < k - i - 1; j++) {
            if (strlen(pc[j]) > strlen(pc[j + 1])) {
                temp = pc[j];
                pc[j] = pc[j + 1];
                pc[j + 1] = temp;
            }
        }
    for (int i = 0; i<k; i++)
    {
        printf("%s\n", pc[i]);
    }
    getchar();
    return 0;
}
#include <string.h>
#include <stdio.h>
#define N 100
#define LEN 80

int main(void)
{
    register int t, k;
    char *pc[N], cc[N][LEN];
    printf("Enter the strings.\n");
    for (k = 0; k < N; k++)
    {
        printf(">");
        gets_s(cc[k]);
        pc[k] = cc[k];

        if (!*cc[k]) 
            break;
    }
    pc[k] = NULL;
    
    char *str;

    for (int i = 0; i< k - 1; i++)
        for (int j = 0; j < k - i - 1; j++) {
            if (strlen(pc[j]) > strlen(pc[j + 1])) {
                str = pc[j];
                pc[j] = pc[j + 1];
                pc[j + 1] = str;
            }
        }
    for (int i = 0; i<k; i++)
    {
        printf("%s\n", pc[i]);
    }
    getchar();
    return 0;
}        
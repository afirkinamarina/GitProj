#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int n = 10;
    int arr[n] = { 0 };
    int num = 0, halfpls = 5, halfmin = 5, mincoun = 0, plscoun = 0, i = 0;
    srand(time(NULL));
    while (i < 10)
    {
        num = rand() % 200 - 100;
        if ((num < 0) && (mincoun < halfmin))
        {
            arr[i] = num;
            mincoun++;
            i++;
        }
        if ((num >= 0) && (plscoun < halfpls))
        {
            arr[i] = num;
            plscoun++;
            i++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);


    int min = 0, pls = 0, counter = 0, id = 0, id1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                id1 = i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] > pls)
            {
                pls = arr[i];
                id = i;
            }
        }
    }
    if (id1 < id)
    {
    for (int k = id1 + 1; k < id; k++)
        counter = counter + arr[k];
}
    else
    {
        for (int k = id + 1; k < id1; k++)
            counter = counter + arr[k];
    }
    printf_s("\nMinimum, Maximum %i, %i\n", min, pls);
    printf("The sum of the elements = %i", counter);
    getch();
    return 0;
}
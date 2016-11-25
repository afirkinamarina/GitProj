#include <stdio.h>
#include <conio.h>
int main()
{
    int height, space, branch;
    printf("Enter the height of the triangle:");
    scanf("%i", &height);
    branch = 1;
    space = height - 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < branch; k++)
        {
            printf("*");
        }
        printf("\n");
        branch = branch + 2;
        space--;
    }
    getch();
    return 0;
}
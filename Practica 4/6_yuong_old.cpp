#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    char name[30][150];
    int age[30] = {0};
    int *old_age, *young_age;
    char *old_name, *young_name;
    int i = 0, n;
    setlocale(LC_ALL, "rus");
    printf("Enter the number of family members: ");
    scanf("%i", &n);
    printf("Enter the name and age (Name Age):\n");
    while (i<n)
    {
        fflush(stdin);
        scanf("%s%i", &name[i][0], &age[i]);
        ++i;
    }
    young_age = age;
    old_age = age;
    for (i = 0; i<n; i++)
    {
        if (age[i]<*young_age)
        {
            young_age = &age[i];
            young_name = &name[i][0];
        }
        else
        {
            old_age = &age[i];
            old_name = &name[i][0];
        }
    }
    if (*old_age < age[0])
    {
        old_age = &age[0];
        old_name = &name[0][0];
    }
    if (young_age == age)
    {
        young_age = &age[0];
        young_name = &name[0][0];
    }

    printf("\n");
    printf("The yongest - %s ", young_name);
    printf("His age - %i", *young_age);
    printf("\n");
    printf("The oldest - %s ", old_name);
    printf("His age - %i ", *old_age);
    printf("\n");
    system("pause");
    return 0;
}
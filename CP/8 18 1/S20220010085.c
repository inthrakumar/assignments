#include <stdio.h>
#include <string.h>
#include <ctype.h>

// program 1
void sum(int *arr, int *arr1, int *arr2, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int y = 0; y < n; y++)
        {
            *arr2 = *arr + *arr1;
            ++arr2;
            ++arr;
            ++arr1;
        }
    }
}
// program2
int stringcopy(char *q, char *r)
{
    while (*q != '\0')
    {
        *r = *q;
        ++r;
        ++q;
    }
}
// progam 3
int no_of_vowels(char *p)
{
    int vowels = 0, consonants = 0;
    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            ++vowels;
        }
        else if (isalpha(*p) == 1 || isalpha(*p) == 2)
        {
            ++consonants;
        }
        ++p;
    }
    printf("The no of vowels in the string is %d\n", vowels);
    printf("The no of consonants in the string is %d\n", consonants);
}
// program 4
void swap(int *v, int *c)
{
    *v = *v + *c;
    *c = *v - *c;
    *v = *v - *c;
}
// program 5
int compare(char *stringpoint1, char *stringpoint2)
{
    int l1 = 0, l2 = 0;
    while (*stringpoint1 != '\0' || *stringpoint2 != '\0')
    {
        if (*stringpoint1 != *stringpoint2)
        {
            return 0;
        }
        ++stringpoint1;
        ++stringpoint2;
        ++l1;
        ++l2;
    }
    if (l1 != l2)
    {
        return 0;
    }

    return 1;
}
int main()
{
    // // // program 1
    int *arr[2][2], *p = (int *)arr;
    int *arr1[2][2], *q = (int *)arr1;
    int *arr2[2][2], *r = (int *)arr2;
    printf("Enter  the elements of the 1st 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int u = 0; u < 2; u++)
        {
            scanf("%d", &arr[i][u]);
        }
    }
    printf("Enter the elements of the 2nd 2x2 matrix:\n");
    for (int r = 0; r < 2; r++)
    {
        for (int v = 0; v < 2; v++)
        {
            scanf("%d", &arr1[r][v]);
        }
    }
    sum(p, q, r, 2, 2);
    printf("The sum of two matrices is :\n");
    for (int d = 0; d < 2; d++)
    {
        for (int y = 0; y < 2; y++)
        {
            printf("%d ", arr2[d][y]);
        }
        printf("\n");
    }
    //  program2
    char a[50];
    char b[50] = {};
    printf("Enter the  string to be copied:\n");
    gets(a);
    char *n = a, *x = b;
    stringcopy(n, x);
    printf("The copied string is:");
    printf("%s", b);
    //  program 3
    char str[50];
    printf("Enter the string:");
    gets(str);
    char *e = str;
    no_of_vowels(e);
    // program4
    int no1, no2, *point1 = &no1, *point2 = &no2;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &no1, &no2);
    printf("The numbers before swap is %d ,%d\n ", *point1, *point2);
    swap(point1, point2);
    printf("The numbers after swap is %d ,%d\n ", *point1, *point2);
    // // program 5
    char string1[50];
    char string2[50];
    printf("Enter the  strings :\n");
    gets(string1);
    gets(string2);
    char *stringpoint1 = string1;
    char *stringpoint2 = string2;
    int result = compare(stringpoint1, stringpoint2);
    if (result == 1)
    {
        printf("They are same");
    }
    else
    {
        printf("They are not same");
    }

    return 0;
}

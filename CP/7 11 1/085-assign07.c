#include <stdio.h>
#include <math.h>
int checking(int);
int sumofprimes(long int num)
{
    int rem = num % 10;
    int quo = num / 10;
    if (quo == 0)
    {
        int flag = 0;
        for (int u = 2; u <= rem; u++)
        {
            if (rem % u == 0)
            {
                ++flag;
            }
        }
        if (flag == 1)
        {
            return rem;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int flag = 0;
        for (int i = 2; i <= rem; i++)
        {
            if (rem % i == 0)
            {
                ++flag;
            }
        }
        if (flag == 1)
        {
            return rem + sumofprimes(quo);
        }
        else
        {
            return sumofprimes(quo);
        }
    }
}
int printingnums(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        if (checking(a) == 1)
        {
            printf("%d\n", a);
            return printingnums(a - 1);
        }
        else
        {
            return printingnums(a - 1);
        }
    }
}
int arr(int array[], int i, int n, int numberofelements)
{
    if (i > n - 2)
    {
        if (numberofelements > 4 && numberofelements < 2)
        {
            return 0;
        }
        else
        {
        }
    }
    else
    {
    }
}
int checking(int a)
{
    int quo = a / 10;
    int rem = a % 10;
    if (quo == 0)
    {
        if (rem == 1 || rem == 3 || (rem % 3 == 0 && rem != 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (rem == 1 || rem == 3 || (rem % 3 == 0 && rem != 0))
        {
            checking(quo);
        }
        else
        {
            return 0;
        }
    }
}
int arr_3(int array1[], int arr1[], int n)
{

    while (n <= 20)
    {

        for (int m = 2; m < 10; m++)
        {
            for (int k = 0; k < 20; k++)
            {
                if (array1[n] * m == array1[k] && array1[n + 1] * m == array1[k + 1] && array1[n + 2] * m == array1[k + 2])
                {
                    printf("from the array ");
                    printf("%d, %d, %d\n", array1[k], array1[k + 1], array1[k + 2]);
                    arr1[0] = array1[n];
                    arr1[1] = array1[n + 1];
                    arr1[2] = array1[n + 2];
                    printf("the sub array of length 3 is  ");

                    printf("%d,%d,%d", arr1[0], arr1[1], arr1[2]);
                    printf("\n");
                }
            }
        }

        arr_3(arr, arr1, ++n);

        return 0;
    }
}
int arr_2(int array1[], int arr[], int n)
{

    while (n <= 20)
    {

        for (int m = 2; m <= 10; m++)
        {
            for (int k = 0; k < 20; k++)
            {
                if (array1[n] * m == array1[k] && array1[n + 1] * m == array1[k + 1] && k != n)
                {
                    printf("from the array ");
                    printf("%d, %d\n", array1[k], array1[k + 1]);
                    arr[0] = array1[n];
                    arr[1] = array1[n + 1];
                    printf("the sub array of length 2 is  ");
                    for (int t = 0; t < 2; t++)
                        printf("%d\t", arr[t]);
                    printf("\n");
                }
            }
        }

        arr_2(array1, arr, ++n);

        return 0;
    }
}
void maxsubstring(char *string, int length, int g)
{
    int c = 0;
    int i2 = 0;
    char substr[length][g]; // declaration of the chracter string
    // checking the substring no of times
    for (int i = 0; i < length - g + 1; i++)
    {
        for (int j = 0; j < g; j++)
        {
            substr[i][j] = string[i + j];
        }
    }
    for (int i = 0; i < length - g + 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length - g + 1; j++)
        {
            int match = 1;
            for (int m = 0; m < g; m++)
            {
                if (substr[i][m] != substr[j][m])
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                count++;
            }
        }
        if (count > c)
        {
            c = count;
            i2 = i;
        }
    }
    if (c > 1)
    {
        printf("Maximum repeating substring of length %d is: ", g); // output
        for (int i = 0; i < g; i++)
            printf("%c", substr[i2][i]);
        printf("\nCount: %d\n\n", c);
    }
    else
    {
        printf("No repeating substring of length %d found.", g);
        printf("\nCount: 0\n\n");
    }

    if (g < 4)
        que3(string, length, g + 1);
}
int twodimensionarray(int arr[], int n, int i, int j)
{
    static int array[2][10];
    int flag = 0;
    if (n < 0 || i > 19 || j > 19)
    {
        return 0;
    }

    for (int i = 2; i <= arr[n - 1]; i++)
    {
        if (arr[n - 1] % i == 0)
        {
            ++flag;
        }
    }
    if (flag == 1)
    {
        array[1][j] = arr[n - 1];
        return twodimensionarray(arr, n - 1, i, j + 1);
    }
    else
    {
        array[0][i] = arr[n - 1];
        return twodimensionarray(arr, n - 1, i + 1, j);
    }
}
int main()
{
    return 0;
}
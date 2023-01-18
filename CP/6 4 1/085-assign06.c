#include <stdio.h>

int oddpalindrome(char str[])
{
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        ++l;
    }
    for (int i = 1; i < l / 2; i += 2)
    {
        if (l % 2 == 0)
        {
            if (str[i] != str[l - i])
            {
                return 0;
            }
        }
        else
        {
            if (str[i] != str[l - i - 1])
            {
                return 0;
            }
        }
    }
    return 1;
}
void GCD()
{
    printf("\n---  ------ -------\n");
    printf("Enter the elements of the array:\n");
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = 99999999; // dummy value
    int max = -9999999;
    int gcd;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }
    for (int j = 1; j <= min; j++)
    {
        if (min % j == 0 && max % j == 0)
        {
            gcd = j;
        }
    }
    printf("Minimum even number is %d\n", min);
    printf("Maximum even number is %d\n", max);
    printf("GCD of minimum and maximum numbers is %d\n", gcd);
    printf("---  ------ -------\n");
}
void primeno()
{
    int flag = 0;
    int next = 99999;
    int flag1 = 0;
    int arr[20] = {2, 15, 7, 6, 3, 8, 22, 41, 23, 4, 18, 13, 5, 27, 47, 12, 11, 23, 10, 9};
    for (int i = 0; i < 20; i++)
    {
        for (int q = 2; q <= arr[i]; q++)
        {
            if (arr[i] % q == 0)
            {
                ++flag;
            }
        }
        if (flag == 1)
        {
            for (int j = arr[i] + 1; j < 49; j++)
            {
                for (int y = 2; y <= j; y++)
                {
                    if (j % y == 0)
                    {
                        ++flag1;
                    }
                }
                if (flag1 == 1)
                {
                    if (next > j)
                    {
                        next = j;
                    }
                }
                flag1 = 0;
            }
            for (int w = 0; w < 20; w++)
            {
                if (arr[i] + next == arr[w])
                {
                    printf("The pair is (%d , %d)\n", arr[i], next);
                    printf("The sum is %d\n", arr[w]);
                }
            }
        }
        next = 99999;
        flag = 0;
        flag1 = 0;
    }
    printf("---  ------ -------\n");
}
void reversearray()
{
    int arr[30] = {1, 3, 4, 5, 6, 2, 3, 8, 7, 6, 5, 4, 3, 2, 3, 4, 2, 5, 1, 8, 9, 4, 3, 2, 1, 5, 2, 6, 7, 8};
    for (int i = 0; i < 28; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if (arr[j] == arr[i + 2])
            {
                if ((arr[j + 1] == arr[i + 1]) && (arr[j + 2] == arr[i]))
                {
                    printf("The starting and ending indices of the subarray is %d and %d\n", i, i + 2);
                    printf("The subarray in the array is : ");
                    printf("%d %d %d\n", arr[i], arr[i + 1], arr[i + 2]);
                    printf("The starting and ending indices of the reverse subarray is %d and %d\n", j, j + 2);
                    printf("The reverse subarray is also present in the array:  ");
                    printf("%d %d %d\n", arr[i + 2], arr[i + 1], arr[i]);
                    printf("\n");
                }
            }
        }
    }
    printf("---  ------ -------\n");
}
void square3matrix(int arr[])
{
    int n = 36;
    for (int i = 0; i < n; i++)
    {
        if (i % 6 == 0 || (i + 1) % 6 == 0 || i < 6 || i > 29)
        {
            continue;
        }
        if (arr[i] % 2 == 0)
        {
            printf("The starting index of 3x3 matrix is %d\n", (i - 7));
            printf("The 3x3 matrix is\n");
            printf("%d  %d  %d\n", arr[i - 7], arr[i - 6], arr[i - 5]);
            printf("%d  %d  %d\n", arr[i - 1], arr[i], arr[i + 1]);
            printf("%d  %d  %d\n", arr[i + 5], arr[i + 6], arr[i + 7]);
        }
    }
}
void square3matrix1(int arr[])
{
    printf("--  ----  ----- ---- ");
    int n = 36;
    for (int i = 0; i < n; i++)
    {
        if (i % 6 == 0 || (i + 1) % 6 == 0 || i < 6 || i > 29)
        {
            continue;
        }
        if (arr[i] % 2 == 0)
        {
            printf("\n");
            printf("The middle term  index and middle term is %d and %d", i, arr[i]);
            printf("\n");
            printf("The sum of 1st row:  %d\n", arr[i - 7] + arr[i - 6] + arr[i - 5]);
            printf("The sum of 2nd row:  %d\n", arr[i - 1] + arr[i] + arr[i + 1]);
            printf("The sum of 3rd row:  %d\n", arr[i + 5] + arr[i + 6] + arr[i + 7]);
            printf("\n");
            printf("The sum of 1st column:  %d\n", arr[i - 7] + arr[i - 1] + arr[i + 5]);
            printf("The sum of 2nd column:  %d\n", arr[i - 6] + arr[i] + arr[i + 6]);
            printf("The sum of 3rd column:  %d\n", arr[i - 5] + arr[i + 1] + arr[i + 7]);
        }
    }
}

int main()
{
    int a = oddpalindrome("abwdcdqb"); // problem 1
    printf("%d", a);
    GCD();          // problem 2
    reversearray(); // problem 3
    primeno();      // problem 4
    int arr[36];
    int n = 36;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % (30 - 10 + 1)) + 10;
    }
    square3matrix(arr); // problem 5
    square3matrix1(arr);

    return 0;
}

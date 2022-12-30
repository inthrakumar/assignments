#include <stdio.h>
int main()
{
    int a[10]; // array of ten elements
    int cmp = 0;
    int swap = 0;
    int n = 10;
    printf("Enter the ten elements for array: \n");
    for (int i = 0; i < n; i++) // getting input
    {
        scanf("%d", &a[i]);
    }
    // insertion sort for the given array
    for (int i = 1; i < n; i++)
    {
        cmp += i;
        int curr = a[i];
        int j = i - 1;
        for (int u = j; a[j] > curr && j >= 0; j--)
        {
            a[j + 1] = a[j];
            ++swap;
        }
        a[j + 1] = curr;
    }
    printf("The sorted array is  \n");
    for (int i = 0; i < n; i++) // getting sorted output
    {
        printf("%d ", a[i]);
    }
    // printing the output
    printf("\nThe number of comparisons done are :%d\n", cmp);
    printf("The number of swaps done :%d", swap);

    return 0;
}
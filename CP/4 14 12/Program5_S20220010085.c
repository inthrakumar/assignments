#include <stdio.h>

int main()
{
    int n = 0; // declaring variables
    int sum = 0;
    int i = 2;
    while (n < 10) // loop
    {
        int k = 0;
        int j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                ++k;
            }
            ++j;
        }
        if (k == 0)
        {
            ++n;
            sum += i;
        }
        ++i;
    }

    printf("The sum of first ten prime numbers is %d", sum); // output
    return 0;
}
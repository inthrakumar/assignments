#include <stdio.h>
#include <string.h>
int main()
{
    // DECLARING VARIBLES
    int sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &sum);
    char str[5000];

    while (sum > 9) // WHILE LOOP
    {
        sprintf(str, "%d", sum);
        int q = strlen(str);
        sum = 0;
        for (int i = 0; i < q; i++)
        {
            int c = 48;
            for (int j = 0; j <= 9; j++)
            {
                if (str[i] == ((char)(c + j)))
                {
                    sum += j;
                }
            }
        }
    }
    printf("The number after continous summation of digits to reduce to 1 digit: %d", sum); // PRINTING SUM
    return 0;
}
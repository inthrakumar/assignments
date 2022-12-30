#include <stdio.h>
#include <math.h>
int main()
{
    char str1[30];
    char str2[6];
    // getting input
    printf("Enter the string of character more than 8 and less than 24 characters:");
    gets(str1);
    printf("Enter the smaller string of length 1 to 4 :");
    gets(str2);
    int l1 = 0;
    int l2 = 0;
    int n_c;
    int occ;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        ++l1;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        ++l2;
    }
    for (int i = 0; i < l1; i++) // loop to find sub sequence
    {
        int a = 0;
        occ = 1;
        if (str1[i] == str2[a])
        {
            a = 1;
            for (int j = i + 1; (j < l1 && a < l2); j++)
            {
                if (str1[j] == str2[a])
                {
                    ++a;
                    ++occ;
                }
            }
        }
        if (occ == l2)
        {
            ++n_c;
        }
    }
    printf("The number of times of occurence of '%s' as subsequence in '%s' is %d", str2, str1, n_c); // output
    return 0;
}
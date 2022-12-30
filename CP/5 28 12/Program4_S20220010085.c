#include <stdio.h>
int main()
{
    // declaring variables
    float a[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    // finding discriminant
    float c1 = (a[1][1] * a[2][2]) - (a[1][2] * a[2][1]);
    float c2 = (a[1][2] * a[2][0]) - (a[1][0] * a[2][2]);
    float c3 = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);
    float c4 = (a[2][1] * a[0][2]) - (a[0][1] * a[2][2]);
    float c5 = (a[0][0] * a[2][2]) - (a[0][2] * a[2][0]);
    float c6 = (a[2][0] * a[0][1]) - (a[0][0] * a[2][1]);
    float c7 = (a[0][1] * a[1][2]) - (a[1][1] * a[0][2]);
    float c8 = (a[0][2] * a[1][0]) - (a[0][0] * a[1][2]);
    float c9 = (a[1][1] * a[0][0]) - (a[1][0] * a[0][1]);

    float disc = (a[0][0] * c1) + (a[0][1] * c2) + (a[0][2] * c3);
    if (disc != 0)
    {
        printf("The entered matrix is non-singular\n");
        printf("The inverse of the matrix is:\n"); // printing inverse
        float am[3][3] = {{c1 / disc, c4 / disc, c7 / disc}, {c2 / disc, c5 / disc, c8 / disc}, {c3 / disc, c6 / disc, c9 / disc}};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%.2f  ", am[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The entered matrix is singular ");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100][2];
    float x;
    float y;
    // getting input
    printf("The x co-ordinate of the point: ");
    scanf("%f", &x);
    printf("The y co-ordinte of the point: ");
    scanf("%f", &y);
    // filling the array
    // in x co-ordinates eqully spaced by 2 and y co-ordinate by 3
    for (int i = 0; i < 100; i++)
    {
        arr[i][0] = 2 + (i * 2);
        arr[i][1] = 3 + (i * 3);
    }
    int h;
    int g;
    float r;
    float min = 9999; // dummy value
    for (int i = 0; i < 100; i++)
    {
        r = sqrt(pow(x - arr[i][0], 2) + pow(y - arr[i][1], 2));
        if (min > r)
        {
            h = arr[i][0];
            g = arr[i][1];
            min = r;
        }
    }
    // printing output values
    printf("The point is nearest to (%d,%d) on the line \n", h, g);
    printf("The shortest distance is %.2f units", min);

    return 0;
}

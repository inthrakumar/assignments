#include <stdio.h>
int main()
{
    char str[10]; // declaring input
    int l = 0;
    printf("Enter the String which is less than 10 characters:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) // starting the loop
    {
        ++l;
    }
    for (int j = 0; j < l / 2; j++)
    {
        char a = str[l - j - 1];
        str[l - j - 1] = str[j];
        str[j] = a;
    }
    printf("The reversed string is ");
    printf("%s", str); // output
    return 0;
}
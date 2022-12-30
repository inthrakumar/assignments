#include <stdio.h>
int main()
{
    // declaring variables
    int f_no = 0;
    int s_no = 1;
    int n;
    int next_no;
    printf("Enter the term of fibonacci series you want to print: "); // input
    scanf("%d", &n);
    int start = 2;
    while (start <= n) // loop
    {
        next_no = f_no + s_no;
        s_no = f_no;
        f_no = next_no;
        ++start;
    }
    printf("The fibonacci term at %d place is %d", n, next_no); // final ouput
}
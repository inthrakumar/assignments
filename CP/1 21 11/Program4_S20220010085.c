#include<stdio.h>
/*function main for program execution*/
int main(void)
{
    int first_n0;
    int second_no;
    int diff;
    int sum;
    printf("ENTER THE first no OF THE sequence\n");
    scanf("%d",&first_n0);
    printf("ENTER THE second no OF THE sequence\n");
    scanf("%d",&second_no);
    diff=second_no-first_n0;
    sum= 100*((2*first_n0)+(99*diff))/2;
    printf("the sum of the first 100 terms of the sequence=%d",sum);

    return 0;
}
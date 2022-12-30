#include<stdio.h>
#include<conio.h>
/*function main for program execution*/
int main(void)
{
    float a;/* first no*/
    float b;/* second  no**/
    printf("Enter the value of  nos\n");
    scanf("%f  ",&a);/*reading value for the nos no*/
    scanf("%f",&b);
    float sum=a+b;
    float sub=a-b;
    float multiply=a*b;
    float div =a/b;
    printf("the sum of the numbers is =%f\n",sum);/*addition of the numbers*/
    printf("the difference  of the numbers is =%f\n",sub);/*subtraction of the numbers*/
    printf("the multiplication of the numbers is =%f\n",multiply);/*multiplication of the numbers*/
    printf("the div of the numbers is =%f\n",div);/*multiplication of the numbers*/



    return 0;
}

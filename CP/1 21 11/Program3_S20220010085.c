#include<stdio.h>
#include <math.h>/*using the math function*/
/*function main for program execution*/
int main(void)
{
    int base;
    int height;
    
    /*getting the input*/
    printf("ENTER THE BASE OF THE TRAINGLE\n");
    scanf("%d",&base);
    printf("ENTER THE height OF THE TRAINGLE\n");
    scanf("%d",&height);
    int b2=pow(base,2);
    int h2=pow(height,2);
    int hypo2=b2+h2;
    int hypotenuse=sqrt(hypo2);
    printf("the hypotenuse of the triangle is= %d",hypotenuse);

    
    return 0;
}
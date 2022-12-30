#include<stdio.h>
/*function main for program execution*/
int main(void)
{
    int a;/* first no*/
    int b;/* second  no*/
    printf("Enter the value of  nos\n");
    scanf("%d %d", &a, &b);/*reading value for the nos no*/
    
    int sum=a+b;
    int sub=a-b;
    int multiply=a*b;
    int div =a/b;


    printf("the sum of the numbers is =%d\n",sum);/*addition of the numbers*/
    printf("the difference  of the numbers is =%d\n",sub);/*subtraction of the numbers*/
    printf("the multiplication of the numbers is =%d\n",multiply);/*multiplication of the numbers*/
    if(b==0){
    	printf("divisor cannot be equal to zero/n");

    }else{
    	printf("the division of the numbers is =%d\n",div);/*division of the numbers*/

    }






    return 0;
}

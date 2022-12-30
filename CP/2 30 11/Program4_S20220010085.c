#include<stdio.h>
int main(){
	//declaring varibles
	int p,q,Y;
	float r,s,x;
	x=0;
	//getting input
	printf("\nEnter the value of P:\n");
	scanf("%d",&p);
	printf("\nEnter the value of Q:\n");
	scanf("%d",&q);
	printf("\nEnter the value of R :\n");
	scanf("%f",&r);
	printf("\nEnter the value of S:\n");
	scanf("%f\n",&s);
	//printing output
	printf("\nThe answer for  X = P + Q / 4 *  S/ 3 + Q: \n");
	x = (p + q/4 *s/3 +q);
	printf("%f\n",x);
	printf("\nThe answer for  X = R + S / 4 * Q / 3 + S:\n") ;
	x= r + s / 4 * q / 3 + s;
	printf("%f\n",x);
	printf("\nThe answer for   X = (int) R / P * Q / 3:\n");
	Y = (int) r / p * q/ 3;  
    printf("%d\n",Y);  
    printf("\nThe answer for x=  p/ q * q %s5%s 3:","%","%");
    x = p/ q * q % 5 % 3;
    printf("%f\n",x);
    printf("\nThe answer for  x = 10 - 5 - 7 / 4 * 4:\n");
    x = 10 - 5 - 7 / 4 * 4;
    printf("%f\n",x);
    printf("\nThe answer for  x= 24/(1 + 2%s3 + 4/5 + 6 + 31%s8):\n","%","%");
    x= 24/(1 + 2%3 + 4/5 + 6 + 31%8);
    printf("%f\n",x);
    return 0;
    
  
   

	    
	







}
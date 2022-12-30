#include<stdio.h>
int main(){
	//declaring variables
	int a,b,c;
	//getting input
	printf("\nenter the number a:\n");
	scanf("%d",&a);
	printf("\nenter the number b:\n");
	scanf("%d",&b);
	printf("\nenter the number c:\n");
	scanf("%d",&c);
	printf("\nThe numbers before performing all the operations:\n");
	printf("a:%d\n",a);
	printf("\nb:%d\n",b);
	printf("\nc:%d\n",c);
	//performing the operations
	--a;
	c++;
	c+=a;
	--b;
    ++c;
    c-=b;
	printf("\nThe numbers after performing all the operations:\n");
	printf("a:%d\n",a);
	printf("\nb:%d\n",b);
	printf("\nc:%d\n",c);


	return 0;

}
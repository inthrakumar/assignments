#include <stdio.h>

int main() {
    //declaring variables
    int a; 
    float b; 
    char c;
    char str[12];
    //getting the input
    printf("\n enter the character:");
    scanf("%c",&c);
    printf("\n enter the integer:");
    scanf("%d",&a);
    printf("\n enter the float number:");
    scanf("%f",&b);
    printf("\n enter a string of  size less than of 13:");
    scanf("%s",str);
    // printing the entered values
    printf("the entered values\n");
    printf("the entered integer is :%d\n",a);
    printf("the entered float number is :%f\n",b);
    printf("the entered character is :%c\n",c);
    printf("the entered string is :%s\n",str);
    
   

    return 0;
}
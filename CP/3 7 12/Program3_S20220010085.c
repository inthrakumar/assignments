#include<stdio.h>
#include<math.h>
int  main(){
    //delcaring variables
    int a,b,c,x,y,z;
    printf("Enter the three nos a,b,c in order:\n");//getting input
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=pow(a,(b*c));
    y=pow(b,(a*c));
    z=pow(c,(a*b));
    int ans =x+y+z;
    int final=pow(ans,2);
    printf("The value of the expression is:%d",final);//printing the value of the expression
    
    
    
    
    return 0;
}
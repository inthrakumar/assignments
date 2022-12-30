#include <stdio.h>

int main() {
    //declaring variables
    int a,sum,sub,d;
    sum=sub=0;
    //getting input through loop
    for(int i=1;i<=3;i++){
        printf("Enter the %d no:",i);
        scanf("%d",&a);
        sum+=a;
    }
    //printing the values
    printf("Enter the number need to be subtracted:");
    scanf("%d\n",&d);
    printf("The sum before subtraction:%d\n",sum);
    sub=sum-d;
    printf("The sum after subtraction%d",sub);   
    return 0;

    
    
    

    


    
    
}
#include<stdio.h>
int  main(){
    float sum,average;//getting input
    sum=0;
    //loop
    for(int i=1;i<=3;i++){
        float sub;
        printf("Enter the subject %d marks(100):\t",i);
        scanf("%f",&sub);
        sum+=sub;
    }
    average=sum/3;
    printf("Total marks:%f\n",sum);
    printf("The average:%f\n",average);
    printf("Your grade is : ");
    //if else statement
    if((100>=average)&&(average>=91)){
        printf("O");
    }else if ((90>=average)&&(average>=75))
    {
        printf("E");
    }else if ((74>=average)&&(average>=55))
    {
        printf("A");
    }else if ((54>=average)&&(average>=45))
    {
        printf("B");
    }else if ((44>=average)&&(average>=41))
    {
        printf("C");
    }
    else if ((average<=40))
    {
        printf("F");
    }else if (average>100)
    {
        printf("invalid bcoz average out of 100");
    }else{
        printf("Out of range");
    }
    
    
    
    
    return 0;
}
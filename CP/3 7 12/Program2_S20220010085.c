#include<stdio.h>
int  main(){
    //declaring inputs
    int marks;
    printf("Enter the marks:\t");
    scanf("%d",&marks);
    printf("Your grade is : ");
    //if else statement
    if((100>=marks)&&(marks>=91)){
        printf("Excellent");
    }else if ((90>=marks)&&(marks>=81))
    {
        printf("Good");
    }else if ((80>=marks)&&(marks>=71))
    {
        printf("Above Average");
    }else if ((70>=marks)&&(marks>=61))
    {
        printf("Average");
    }else if ((60>=marks)&&(marks>=51))
    {
        printf("Below Good");
    }else if ((50>=marks)&&(marks>=41))
    {
        printf("Poor");
    }else if ((40>=marks)&&(marks>=31)){
        printf("Very Poor");
    }else if (marks>100)
    {
        printf("enter valid input");
    }else{
        printf("You are not graded");
    }
    
    
    
    
    
    return 0;
}
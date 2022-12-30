#include <stdio.h>
#include <math.h>

int main() {
    //declaring variables
    float acc , height , a,total_distance, speed; 
    int i; 
    //getting input
    printf("enter the height from which ball is released(in m):");
    scanf("%f\n",&height); 
    total_distance=height;
    for (i=0;i<2;++i){
        speed=(sqrt(2*9.8*height))/2;
        height=(speed*speed)/(2*9.8);
        a=2*height;
        total_distance+=a;
        
        
    }
    printf("the total distance covered by ball when touching the floor third time(in m )=%f\n",total_distance);//printing output


    return 0;
}
#include<stdio.h>
int  main(){
    //getting input
    float kms,base_fare,total_fare,service_charge;
    printf("Enter the total distance travelled (in kms):\t");
    scanf("%f",&kms);
    // if else statement
    if(kms<=10.00){
        base_fare=120.00;
        service_charge=(0.1)*base_fare;
        total_fare=base_fare+service_charge;
        printf("The base fare is %f\n",base_fare);
        printf("The service fare is %f\n",service_charge);
        printf("The total fare is %f\n",total_fare);

    }else if ((kms>=10.00)&&(kms<=15.00)){
        float a= kms-10.00;
        float b=a*10;
        base_fare=120.00+b;
        service_charge=(0.1)*base_fare;
        total_fare=base_fare+service_charge;
        printf("The base fare is %f\n",base_fare);
        printf("The service fare is %f\n",service_charge);
        printf("The total fare is %f\n",total_fare);
    }else if((kms>=15.00)&&(kms<=20.00)){
        float a= kms-15.00;
        float b=a*8;
        float c=5*10;
        base_fare=120.00+b+c;
        service_charge=(0.1)*base_fare;
        total_fare=base_fare+service_charge;
        printf("The base fare is %f\n",base_fare);
        printf("The service fare is %f\n",service_charge);
        printf("The total fare is %f\n",total_fare);

    }else{
        float a= kms-20.00;
        float b=a*6;
        float c=5*10;
        float d=5*8;
        base_fare=120.00+b+c+d;
        service_charge=(0.1)*base_fare;
        total_fare=base_fare+service_charge;
        printf("The base fare is %f\n",base_fare);
        printf("The service fare is %f\n",service_charge);
        printf("The total fare is %f\n",total_fare);
    }
    
        
    

    
    
    return 0;
}
#include <stdio.h>

int main() {
    //declaring the variables
    int A,B,C,c,d,e,f,g,h;
    A=5;
    B=10;
    C=15;
    //FIRST OPERATION
    printf("A=5, B=10, C=15\n");
    printf("\nresult after executing BITWISE AND ON A AND B:");
    c=A&B;
    printf("%d\n",c);
    //second operation
    printf("\nresult after executing BITWISE OR ON A AND B:");
    d=A|B;
    printf("%d\n",d);
    //third operation
    printf("\nresult after executing BITWISE xclusive or  ON B AND C:");
    e=B^C;
    printf("%d\n",e);
    //fourth operation
    printf("\nresult after executing left shift on A by 2:");
    f=A<<2;
    printf("%d\n",f);
    //fifth operation
    printf("\nresult after executing right sihft ON B BY 4:");
    g=B>>4;
    printf("%d\n",g);
    //sixth operation
    printf("\nresult after finding one's complement of C:");
    h=~C;
    printf("%d\n",h);
     
     
    
     

    return 0;
}
#include<stdio.h>
#include<string.h>
int  main(){
    //declaring the variables
    char a;
    //getting input
    printf("Enter the character:\t");
    scanf("%c",&a);
    // uppercase variable and lowercase variable to store vowels of both type
    int uppercase_vowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
    int lowercase_vowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    // evaluates to 1 (true) if a is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("The entered character is a vowel");
    else
        printf("The entered character is not a vowel");
    return 0;
    
    
    
    
    
    
    return 0;
}
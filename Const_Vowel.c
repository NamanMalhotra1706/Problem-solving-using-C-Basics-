#include<stdio.h>

void main(){

    char A;
    printf("Enter your Char : ");
    scanf("%c",&A);

    if(A=='a' || A=='e' || A=='i' || A=='o' || A=='u' || A=='A' || A=='E' || A=='I' || A=='O' || A=='U'){
        printf("Hurray! Its Vowel.");
    }
    else{
        printf("Awww! Baby Its Constant.");
    }
}
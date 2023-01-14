#include<stdio.h>

void main(){

    char A;
    printf("Enter your Data: ");
    scanf("%c",&A);

    if(A>='a'&& A<='z'||A>='A' && A<='Z'){
        printf("Hurray! Its charcter");
    }
    else if(A>='0' && A<='9'){
        printf("Awww! Baby Its Number");
    }
    else{
        printf("Arreey! Ye to special Character Nikla");
    }
}
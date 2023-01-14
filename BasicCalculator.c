#include<stdio.h>

void main(){
    int Num1,Num2;
    char Operator;
    printf("Enter the Num1: ");
    scanf("%d",&Num1);
    printf("Enter the Num2: ");
    scanf("%d",&Num2);
    printf("Enter the operator: ");
    scanf(" %c",&Operator);
    int Add = Num1+Num2;
    int Sub = Num1-Num2;
    int Mul = Num1*Num2;
    int Dvd = Num1/Num2;
    switch (Operator)
    {
    case '+' :
        printf("The Sum of Numbers are : %d",Add);
            break;
    case '-' :
        printf("The Sum of Numbers are : %d",Sub);
            break;

    case '*' :
        printf("The Sum of Numbers are : %d",Mul);
            break;

    case '/' :
        printf("The Sum of Numbers are : %d",Dvd);
            break;
    
    
    default:
    printf("Aney yrr Basic Calculator hai --> + , - , / , * --> Yahhi lagga bss ");
        break;
    }
}
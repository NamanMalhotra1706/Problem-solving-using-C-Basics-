//  Menu-Driven Program to perform a simple calculation
// 1-addition 2-substraction 3-multiplication 4-division

#include<stdio.h>
void main(){
    int Sign , Num1 ,Num2;
    scanf("%d",&Sign);
    scanf("%d",&Num1);
    scanf("%d",&Num2);

    switch (Sign)
    {
    case 1 :
        printf("%d",Num1+Num2);
        break;
    case 2 :
        printf("%d",Num1-Num2);
        break;
    case 3 :
        printf("%d",Num1*Num2);
        break;
    case 4 :
        printf("%d",Num1/Num2);
        break;
    
    default:
    printf("Enter Valid Operator between 1 2 3 4");
        break;
    }
}

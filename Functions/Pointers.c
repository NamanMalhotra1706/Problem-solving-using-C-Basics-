// Store Adress of Another Variable
// &->  Adrressof Operator
// *->  Derefrence Operator


#include<stdio.h>

int main(){
    int n = 7;
    int* Point = &n;

    printf("The Adrress of N is : %p \n",Point);
    printf("The Adrress of Point : %p \n",&Point);

    printf("The Adrress of N is : %d \n",*Point); //--> %d sa vo Value dedega
    printf("The Value of N is : %x \n",*Point);  // --> Hexadecimal ma aarga

    int* ptr2;
    printf("Adrres of Khali PTr :: %p\n",ptr2);

    int* NullPtr = NULL ;
    printf("Adrress of Null Ptr : %p \n",NullPtr);
    printf("Adrress of Null Ptr Pointing NULL Value : %p \n",&NullPtr);



    
    
}
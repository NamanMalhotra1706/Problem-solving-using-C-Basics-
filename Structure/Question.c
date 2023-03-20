// Write a 'C' program to accept customer details such as: Account_no, Name,
// Balance using structure. Assume 3 customers in the bank. Write a function to print the
// account no. and name of each customer whose balance < 1000 Rs, if no customer
// found whose balance is less than 1000, print None.

#include<stdio.h>

struct SBI{
    int Account_no;
    char Name[20];
    int Balance;
}User[3];

int checkBalance(struct SBI User[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(User[i].Balance<100000){
            printf("%d\n",User[i].Account_no);
            printf("%s\n",User[i].Name);
            printf("%d\n",User[i].Balance);
            count++;
        }

    }
    if(count==0)
    printf("None\n");
}

int main(){
    for(int i=0;i<3;i++){
        printf("Enter %d Customer Id : ",i);
        scanf("%d",&User[i].Account_no);
        printf("Enter %d Customer Name : ",i);
        scanf("%s",&User[i].Name);
        printf("Enter %d Customer Balance : ",i);
        scanf("%d",&User[i].Balance);
    }

    checkBalance(User,3);
        
       

}
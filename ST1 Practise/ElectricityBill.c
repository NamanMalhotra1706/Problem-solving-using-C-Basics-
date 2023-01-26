// 6. calculate and the Electricity bill
// Unit Charge/Unit
// upto 199 @1.20
// 200 – 400 @1.50
// 401 – 600 @ 1.80
// 601 and above @ 2.00
// If bill exceeds Rs. 400 then a surcharge of 20% will be charged


#include<stdio.h>

int main(){
    int Units ;
    float Bill;
    scanf("%d",&Units);

     if(Units <=199){
        Bill = Units*1.20;
    }
    
    else if(Units>=200 && Units<=400){
        Bill = Units*1.50;
    }

    else if(Units>=401 && Units<=600){
        Bill = Units*1.80;
    }

    else if(Units>=601){
        Bill = Units*2.00;
    }

    if(Bill>400){
        Bill = Bill+(Bill*(20/100));
    }

    printf("Bill is : %.2f",Bill);


}
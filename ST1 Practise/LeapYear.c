#include<stdio.h>
int main(){
    int Year;
    scanf("%d",&Year);
    if(Year%400==0){
        printf("%d Leap Year Hai",Year);
    }
   
    else if(Year%4==0){
        printf("%d Leap Year Hai",Year);
    }

    else if(Year%100==0){
        printf("%d Leap Yeat Nahi Hai",Year);
    }
    else{
        printf("%d Na bhai Ye to bilkul bhi nahi hai",Year);
    }
   
    
}
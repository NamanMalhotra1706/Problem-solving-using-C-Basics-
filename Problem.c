#include<stdio.h>

int main () {
    
   long int num ;
   scanf("%ld",&num);
  int reverse=0, remainder;
   while(num!=0){
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num/10;
   }
   printf("%d",reverse);

}
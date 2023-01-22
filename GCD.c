#include<stdio.h>
void main() {
    int N1,N2,hcf;
    scanf("%d %d",&N1,&N2);
    int min = (N1<N2)? N1:N2;

   for(int i=1;i<=min;i++){
    if((N1%i==0)&&(N2%i==0)){
        hcf=i;
    }
   }

   printf("%d",hcf);
   
}
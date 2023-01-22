#include<stdio.h>
void main() {
    int N1,N2,max;
    scanf("%d %d",&N1,&N2);

    max = (N1>N2)?N1:N2;

    while(1){
        if((max%N1==0)&&(max%N2==0)){
            printf("%d",max);
            break;
        }
        max++;
    }
    
}
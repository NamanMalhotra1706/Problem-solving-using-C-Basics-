#include<stdio.h>
int main(){
    int Purchase,Sale;
    scanf("%d %d",&Purchase,&Sale);

    if(Purchase-Sale<0){
        printf("Profit of : %d",Sale-Purchase);
    }
    else{
        printf("Loss of : %d",Purchase-Sale);
    }

}
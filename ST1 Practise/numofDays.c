#include<stdio.h>
int main(){
    int Month,Year;
    scanf("%d %d",&Month,&Year);
    if(Month==1 || Month==3 ||Month==5 ||Month==7 || Month==8 ||Month==10||Month==12){
        printf("31 Days");
    }
    else if((Year%4==0) && Month==2) {
                printf("29 Days");
            }


        
    else if(Month==2) {
            printf("28 Days");
        }
        
    
    else{
        printf("30 Days");
    }
}

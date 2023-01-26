#include<stdio.h>
int main(){

    int Xaxis, Yaxis;
    scanf("%d",&Xaxis);
    scanf("%d",&Yaxis);

    if(Xaxis>0 && Yaxis >0){
        printf("1st Quadrant");
    }
    else if(Xaxis>0 && Yaxis >0){
        printf("2nd Quadrant");
    }
    else if(Xaxis>0 && Yaxis >0){
        printf("3rd Quadrant");
    }
    else if(Xaxis>0 && Yaxis >0){
        printf("4th Quadrant");
    }
    else{
        printf("Origin");
    }
}
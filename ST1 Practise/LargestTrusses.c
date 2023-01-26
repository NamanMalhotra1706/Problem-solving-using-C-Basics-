#include<stdio.h>
int main(){
    float N1,B1,N2,B2;
    scanf("%f %f %f %f",&N1,&B1,&N2,&B2);

    if(((N1*B1)/2) > ((N2*B2)/2) ){
        printf("1st Trusses is Largest with  : %.2f ",((N1*B1)/2));
    }
    else{
        printf("2nd Tusses is Largest with  : %.2f ",((N2*B2)/2));
    }
}
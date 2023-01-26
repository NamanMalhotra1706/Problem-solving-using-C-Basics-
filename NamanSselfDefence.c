#include<stdio.h>

int main(){
    int Case;
    scanf(" %d",&Case);

    while(Case--){

        int n , count=0,age;
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            scanf("%d",&age);

        if(age>=10 && age<=60){
            count++;
            }

        }
    printf("%d \n",count);
        }
        
    }

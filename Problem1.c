#include<stdio.h>

int count(int n){
    int count=0;
        if(n==1){
            return 0;
        }

        else if(n==2){
            return -1;
        }



        else{
        while(n%3==0 || n%6==0){
            if(n%3==0 && n%6!=0){
                n*=2;
                count++;
            }
            n/=6;
            count++;
        }
        if(n!=1){
            return -1;
        }
    }

    return count; 
    
}
    

int main(){
    int n;
    scanf("%d",&n);

    printf("count is : %d ",count(n));
    
}
#include<stdio.h>

bool canPlacecow(){

}
void main() {

    int stalls[]={1,2,4,8,9};
    int n=5;
    int cowa=3;

    int s=0,e=stalls[n-1]-stalls[0];
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(canPlacecow(stalls,cows,mid)){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }

    }

    printf("Max distance between cows can be : %d",ans);
}

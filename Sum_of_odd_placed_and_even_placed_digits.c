#include<stdio.h>
void main() {

    int N,evenPlaced=0,oddPlaced=0,Position=1;
    scanf("%d",&N);
    while(N>0){
        int x=N%10;
        N=N/10;
        if(Position%2==0){
            evenPlaced =evenPlaced+x;
        }
        else{
            oddPlaced+=x;
        }
        Position++;
    }
    printf("%d\n",oddPlaced);
    printf("%d\n",evenPlaced);
}

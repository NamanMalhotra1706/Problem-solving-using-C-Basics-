// Given a ladder containing n steps you can either take a jump 1,2,3 at each step. Find the no. of ways to climb the Ladder

// ways(n-1)+ways(n-2)+ways(n-3)

// int ways(int n) {    return ways(n-1)+ways(n-2)+ways(n-3) }

        #include<stdio.h>
        int ways(int n){

            if(n==0){
                return 1;
            }
            if(n<0){
                return 0;
            }
            return ways(n-1)+ways(n-2)+ways(n-3);
        }

        int main(){
            int n;
            printf("Enter the Number of Steps of Ladder : ");
            scanf("%d",&n);

            printf("Number of Ways to reach to Reach the Ladder till %d Steps  is : %d ",n,ways(n));
        }
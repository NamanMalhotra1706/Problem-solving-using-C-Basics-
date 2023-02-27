// Power Using Reccursion

#include<stdio.h>

            int PowerOf(int p){

                        if(p==0){
                            return 1;
                        }
                        int ans =  2 * PowerOf(p-1);
                        return ans;
            }

            int PowerOf2Better(int p){
                if(p==0){
                    return 1;
                }
                int half = PowerOf(p/2);
                int fullResult = half*half;
                if(p%2!=0){
                    fullResult*=2;
                }

                return fullResult;
            }

            int main(){
                int power;
            printf("Enter the Power : ");
                scanf("%d",&power);

                printf("2^ %d is: %d ",power,PowerOf(power));

                printf("\n2^ %d is: %d in Better Case",power,PowerOf2Better(power));
            }

            // int PowerOf(int n ,int p){

            //             if(p==0){
            //                 return 1;
            //             }
            //             int ans =  n * PowerOf(n,p-1);
            //             return ans;
            // }

            // int main(){
            //     int n , power;
            //     printf("Enter the Number : ");
            //     scanf("%d",&n);

            //     printf("Enter the Power : ");
            //     scanf("%d",&power);

            //     printf("Power of %d %d is :  %d",n,power,PowerOf(n,power));
            // }


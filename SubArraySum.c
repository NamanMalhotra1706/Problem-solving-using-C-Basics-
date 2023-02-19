#include<stdio.h>
#include<limits.h>
int main(){
    int n,maxSum = INT_MIN;
    printf("Enter the Size of an Array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element at %d : ",i);
        scanf("%d",&arr[i]);
    }

    // for(int st=0;st<n;st++){
    //     for(int en=st+1;en<n;en++){
    //         int currentSum =0;
    //         for(int k=st;k<=en;k++){
    //             currentSum +=arr[k];
    //         }

    //         maxSum =  currentSum > maxSum ? currentSum : maxSum;
    //     }
    // }

    int csum[n];

	csum[0]=arr[0];


	for (int i = 1; i <n; ++i)
	{
		csum[i]=csum[i-1]+arr[i];
	}
 	
 	// for (int i = 0; i < n; ++i)
 	// {
 	// 	printf("%d ",csum[i]);
 	// }
    
 	for(int st=0;st<n;st++)
 	{
 		for (int en = st+1; en<n ; en++)
 		{
 			 int currSum=INT_MIN;
 			  if(st>0)
 			  	currSum=csum[en]-csum[st-1];
 			 else
 				currSum=csum[en];

 			  maxSum= currSum>maxSum ? currSum : maxSum;
 		}
 	}
    printf("Max Sum is : %d",maxSum);
}
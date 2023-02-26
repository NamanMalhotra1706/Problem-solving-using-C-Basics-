#include <stdio.h>
int cntGreaterOrEqual(int arr[][3],int mid,int n)
{
	int i=0;
	int cnt=0;
	while(i<n)
	{
		int j=n-1;

		while(j>=0 && arr[i][j]>mid)
		{
			j--;
		}
		cnt+=(j+1);

		i++;
	}
	return cnt;

}
int kthSmallest(int arr[][3],int n, int k)
{
	int s=arr[0][0],e=arr[n-1][n-1];
	int mid;
	int ans;
	while(s<=e)
	{
		mid=(s+e)/2;

		int cnt=cntGreaterOrEqual(arr,mid,n);
		if(cnt>=k)
		{
			ans=mid;
			e=mid-1;
		}
		else
			s=mid+1;
	}
	return ans;
}
int main()
{
	int mat[][3] ={{1,5,9},{10,11,13},{12,13,15}};
	int n=3;
	int k=8;

	printf("%d ",kthSmallest(mat,n,k));
}
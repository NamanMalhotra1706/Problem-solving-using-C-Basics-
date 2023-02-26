#include <stdio.h>
#include <limits.h>
int max(int a,int b)
{
	return a>b ? a : b;
}
int maxMatVal(int mat[][5],int n)
{
	int maxMat[n][n];
	int maxVal=INT_MIN;
	maxMat[n-1][n-1]=mat[n-1][n-1];
	//last row;
	for(int i=n-2;i>=0;i--)
	maxMat[n-1][i]= max(mat[n-1][i],maxMat[n-1][i+1]);

	//last col
	for(int i=n-2;i>=0;i--)
	maxMat[i][n-1]=max(mat[i][n-1],maxMat[i+1][n-1]);


	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			// 1. Fill maxMatrix
			// 2. evaluate exp-> mat[a][b]-mat[i][j]
			maxMat[i][j]=max(mat[i][j],max(maxMat[i+1][j],maxMat[i][j+1]));
			maxVal=max(maxVal,maxMat[i+1][j+1]-mat[i][j]);
		}
	}
	
	return maxVal;
}
int main()
{
	int mat[5][5] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 6, 1, 3},
        {-4, -1, 1, 7, -6},
        {0, -4, 10, -5, 1}
    };
    int n=5;
    printf("Max exp val is %d ",maxMatVal(mat,n));
}
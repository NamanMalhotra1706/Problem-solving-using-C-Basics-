#include<stdio.h>
void printMatrix(int path[][4],int n)
{
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d",path[i][j]);

			printf("\n");
		}

		printf("\n");
}
void printPaths(int mat[][4],int n,int x,int y,int path[][4])
{
	if(x>=n || y>=n)
	return;

	if(mat[x][y]==0)
	return;
	
	if(x==n-1 && y==n-1)
	{
		path[x][y]=1;
		printMatrix(path,n);
		path[x][y]=0;
		return;
	}

	path[x][y]=1;
	// check below
	printPaths(mat,n,x+1,y,path);
	// check right
	printPaths(mat,n,x,y+1,path);
	//backtrack
	path[x][y]=0;

}
int main()
{
	int mat[4][4]={ 
		{1,1,1,1},
		{1,0,0,1},
		{1,0,0,1},
		{1,1,1,1},
		};

	int path[4][4]={0};
	int n=4;
	printPaths(mat,n,0,0,path);

	
}
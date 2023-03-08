#include <stdio.h>
#include <stdbool.h>

bool isPlacingQueenSafe(int board[][4],int x,int y,int n)
{
		// current cell is safe or not

	// current col

	// rowNo=x;
	// colNo=y;


	for(int i=x-1;i>=0;i--)
	{
		if(board[i][y]==1)
			return false;
	}

	// left diagonal

	int i=x-1;
	int j=y-1;

	while(i>=0 && j>=0)
	{
		if(board[i][j]==1)
			return false;

		i--;
		j--;
	}


	// right diagonal
	i=x-1;
	j=y+1;

	while(i>=0 && j<n)
	{
		if(board[i][j]==1)
			return false;

		i--;
		j++;

	}

	return true;
}

void printMatrix(int mat[][4],int n)
{

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d ",mat[i][j]);

			printf("\n");
		}

		printf("\n\n");

}


bool nqueens(int board[][4],int currRow,int n)
{
	if(currRow==n)
	{

		printMatrix(board,n);
		return false;

	}

	// frame of reference row whose no is currRow

	for(int i=0;i<n;i++)
	{
	
		if(isPlacingQueenSafe(board,currRow,i,n))
		{
			board[currRow][i]=1;
			bool canPlaceRemainingQueens=nqueens(board,currRow+1,n);

			if(canPlaceRemainingQueens)
				return true;

			board[currRow][i]=0;
		}
	}

	return false;
}
int main()
{
	int board[4][4]={0};
	int n=4;


	if(nqueens(board,0,n))
		printf("We can place n queens\n ");

	else
		printf("Not possible");


}
#include<stdio.h>
int main(){

    // int Rows,Coloum;
    // scanf("%d",&Rows);
    // scanf("%d",&Coloum);
    // int arr[Rows][Coloum];


    // for(int i=0;i<Rows;i++){
    //     for(int j=0;j<Coloum;j++){
    //         printf("Enter value for arr[%d][%d]:", i, j);
    //         scanf("%d ",&arr[i][j]);
    //     }
    // }
    // for(int i=0;i<Rows;i++){
    //     for(int j=0;j<Coloum;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //    printf("\n");
    // }

    // Printing in Reverse
    //  for(int i=Rows-1;i>=0;i--){
    //      for(int j=Coloum-1;j>=0;j--){
    //         printf("%d ",arr[i][j]);
    //     }
    //    printf("\n");
    //}

    // Spiral Path and Wave Path
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;

    // Spiral
                    // 	int stcol=0,encol=n-1,strow=0,enrow=n-1;

                    // 	while(strow<n && enrow>=0 && stcol<n && encol>=0)
                    // 	{
                    // 		// strow

                    // 		for(int i=stcol; i<=encol  ;i++)
                    // 			printf("%d ",arr[strow][i]);

                    // 		strow++;

                    // 		// encol
                    // 		for(int i=strow;i<=enrow ; i++)
                    // 			printf("%d ",arr[i][encol]);

                    // 		encol--;

                    // 		// enrow
                    // 		for(int i=encol ; i>=stcol  ; i-- )
                    // 			printf("%d ",arr[enrow][i]);

                    // 		enrow--;

                    // 		// stcol
                    // 		for(int i=enrow;i>=strow  ;i--)
                    // 			printf("%d ",arr[i][stcol]);

                    // 		stcol++;
                    // }


// Wave 
    // int j=0;
	// while(j<n)
	// {

	// 	if(j%2==0)
	// 	{
	// 		//print downwards
	// 		for(int i=0;i<n;i++)
	// 			printf("%d ",arr[i][j] );
	// 	}

	// 	else
	// 	{
	// 		//print upwards
	// 		for(int i=n-1;i>=0;i--)
	// 			printf("%d ",arr[i][j]);
	// 	}

	// 	j++
	// }

    
}
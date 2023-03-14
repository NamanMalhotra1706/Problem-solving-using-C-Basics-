#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp=fopen("nums.txt","r");

	if(fp==NULL)
	{
		printf("can't open file");
		exit(1);
	}

	int no;
	int sum=0;

	fscanf(fp,"%d",&no);
	printf("%d ",no);
	sum+=no;
	fscanf(fp,"%d",&no);
	printf("%d ",no);
		sum+=no;
	fscanf(fp,"%d",&no);
	printf("%d ",no);
		sum+=no;
	fscanf(fp,"%d",&no);
	printf("%d ",no);
		sum+=no;

		printf("\n Sum=%d",sum);
}
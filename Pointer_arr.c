#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4};

	int n=4;


	int* ptr= arr;
	char char='a';
	for(int i=0;i<n;i++)
	{
		printf("index=%d memory location=%p value at this location=%d \n",i,ptr,*ptr);
		ptr=ptr+1;
	}
}
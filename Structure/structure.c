// User Defined Data Type
#include<stdio.h>

struct car {

	int modelNo;
	char brandName[10];
	char color[10];
};


int main()
{
		// int car1ModelNo=420;
		// char car1BrandName[20]="maruti";
		// char car1Color[20]="blue";

		// int car2ModelNo=401;
		// char car2BrandName[20]="BMW";
		// char car2Color[20]="black";

		struct car car1={420,"hyundai","blue"};

		printf("%d ",car1.modelNo);


		struct car car2;


		car2.modelNo=121;

		printf("\n %d ",car2.modelNo);

}
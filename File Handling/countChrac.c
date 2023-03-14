#include <stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("demo.txt","r");

	if(fp==NULL)
	{
		printf("Can't open file \n");
		exit(1);
	}

	int countChars,countLines,countSpaces;

	countSpaces=countLines=countChars=0;

	char ch=fgetc(fp);

	while(ch!=EOF)
	{
		if(ch==' ')
			countSpaces++;

		else if(ch=='\n')
			countLines++;

		else
		countChars++;

		ch=fgetc(fp);
	}


	printf("No of spaces=%d\n",countSpaces);
	printf("No of Lines=%d\n",countLines);
	printf("No of chars=%d\n",countChars);
}
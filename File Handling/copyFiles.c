#include<stdio.h>
#include<stdlib.h>
 int main(){

    FILE *fp = fopen("demo.txt","r");
    FILE *nfp = fopen("copyFile.txt","w");

    if(fp==NULL || nfp==NULL) //file can't exist  or koi error ki wajah sa khuli nahi
	{
		printf("Can't open file \n");
		exit(1); // terminating abnormal (return 1 bhi likh sakte tha)
	}

    char ch = fgetc(fp);  // chrac ki value read krte

    while(ch!=EOF){
        fputc(ch,nfp); // to write the character on destination (nfp file)
        ch=getc(fp);
    }
    fclose(fp);
    fclose(nfp); // close memory efficient ka lia 
 }
#include<stdio.h>
#include<stdlib.h>
 int main(){

    FILE *fp = fopen("demo.txt","r");
    FILE *nfp = fopen("copyFile.txt"."w");

    char ch = fgetc(fp);

    while(ch!=EOF){
        fputc(ch,nfp);
        ch=getc(fp);
    }

 }
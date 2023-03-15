#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp = fopen("newFile.txt","w");

    if(fp==NULL){
        printf("Can't Open The File");
    }

    printf("Enter you message here : \n ");

    char str[210];
    while(strlen(gets(str))>0){
        fputs(str,fp);
        fputs("\n",fp);
    }

    fclose(fp);
}
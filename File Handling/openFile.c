#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;

    fp = fopen("demo.txt","r"); // Inbuild Function to open file (fopen)

    if(fp==NULL){
    printf("Can't open file/file doesn't exist \n");
    exit(1); }

    else{
        printf("File Opened\n");
    }

    char ch;
    ch = fgetc(fp);
    // printf("%c",ch);
    
    while(ch!=EOF)//end of File
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }


    
    // fscanf(fp,"%c",&ch);
    // while(ch!=' '){
    //     printf("%c",ch);
    //     fscanf(fp,"%c",&ch);
    // }

    // Reading character withou loop

    // fscanf(fp,"%c",&ch);  //file, same scanf jaisa krte ... ek character uthana scanf ma dal dena
    // printf("%c",ch);

    // fscanf(fp,"%c",&ch); // abb next pr chla gya and reading next character
    // printf("%c",ch);

    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);

    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);

    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);
    
    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);

    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);
    
    // fscanf(fp,"%c",&ch);  
    // printf("%c",ch);

    
}
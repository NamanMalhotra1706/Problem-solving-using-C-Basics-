#include<stdio.h>

int main(){
    FILE *fp = fopen("demo.txt","r+");

    fputc('*',fp);// file ka pehle character ko * kr rha hai  --> H ko * krdega

    // fseek(fp,offset,reFpoint) --> offset --> kitna agga piche jana(Pointer), refPoint --> kaha sa jana agga sa ya piche sa (SEEK_SET --> Starting sa)
    fseek(fp,0,SEEK_SET);

    //fseek(fp,-5,SEEK_END) ---> ENDING sa 5 step piche jao and uska baad sa print krvaao

    char ch=fgetc(fp);

    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fp);
    }
}
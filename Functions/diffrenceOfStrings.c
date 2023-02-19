#include<stdio.h>
#include<string.h>
int main(){

    char str[1000];
    scanf("%s",str);
    printf("%c",str[0]);

    for(int i=1;i<strlen(str);i++){
        int diff = str[i]-str[i-1];


        printf(" %d  %c",diff,str[i]);
    }
}
#include<stdio.h>
/*int main(){
    char name[20];
    printf("enter name: ");
    fgets(name,100,stdin);      /*fgets(str,int n,file stream)
    printf("your name is ");
    puts(name);
    return 0;*/
//--------------------------------------------------------------------------------------
// passing string to func
void displayString(char str[]);
void main(){
char str[50];
printf("enter string: ");
fgets(str,sizeof(str),stdin);
displayString(str);
}
void displayString(char str[]){
    printf("string output: ");
    puts(str);
}
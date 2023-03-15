#include<stdio.h>

int main(){
    FILE *fp = fopen("demo.txt","a")  // a -> append mode
    // preserve old content  and write the new content
    // append after previous content
    fputc("#",fp);
}
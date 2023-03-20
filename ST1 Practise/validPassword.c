#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("Enter the String : ");
    fgets(str,sizeof(str),stdin);
    int count1=0,count2=0,count3=0,count4=0,count5=0;
    int passLen = strlen(str);

    if(passLen>=8){
        count1=1;
    }
        
        
        for(int i=0;i<passLen;i++){
            if((str[i]>='a'&& str[i]<='z'))
            count2=1;

            if((str[i]>='A'&& str[i]<='Z'))
            count3=1;

            if((str[i]>='0'&& str[i]<='9'))
            count4=1;

           if((str[i]=='#' || str[i]=='?' || str[i]=='$'||str[i]=='!'))
            count5=1;           
            }

            if(count1==1 && count2==1 && count3==1 && count4==1 && count5==1){
                printf("Password Is Valid");
            }
            else{
                printf("Password is not Valid Password");
            }
    

}
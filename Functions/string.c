#include<stdio.h>
#include<string.h>

int main(){

    // char str[] = "Naman";
    // char str1[10];
    // scanf("%s",&str1);

    // printf("%s \n",str);
    // printf("%s \n",str1);

    // printf("The Length of String is : %d \n",strlen(str));
    // printf("The Length of String is : %d \n",strlen(str1));


    // printf("The reverse of str  is : %s \n ",strrev(str));
    // printf("The reverse of str1  is : %s \n",strrev(str1));

    // Some more str function
        // strcpy()
        // strcat()
        // strcmp()


        // Print length of a string
            // char str[50];
            // int length=0,vowels=0;
            // printf("Enter Your string  : ");
            // gets(str);

            // for(int i=0;str[i]!='\0';i++){
            //     length++;
            //     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
            //         vowels++;
            //     }
            // }

            // printf("The length of String is :  %d \n ",length);
            // printf("Total Vowles :  %d  ",vowels);
    
    // Reverse a String
        //  char str[50],temp;
        //     int length=0,vowels=0;
        //     printf("Enter Your string  : ");
        //     gets(str);

        //     for(int i=0;i<strlen(str)/2;i++){   
        //         temp = str[i];
        //         str[i]=str[strlen(str)-i-1];
        //         str[strlen(str)-i-1]=temp;
        //     }

        //     printf("%s",str);

        
    // Duplicate charac in string

    char str[50];
    gets(str);

    int n = strlen(str);
// 1st Method
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int count =1;
    //     for(int j=i+1;j<n;j++){
    //         if(str[i]==str[j]){
    //             count++;
    //             str[j]='0';
    //         }
    //     }
    //   if(count>1 && str[i]!='0'){
    //     printf(" %c occuring %d times",str[i],count);
    //   }
    // }

// 2nd Method 
    int freq[26]={0};
    for(int i=0;i<n;i++){
        char ch=str[i];
        int idx=ch-'a';
        freq[idx]++;
    }
    for (int i = 0; i < 26; i++)
      {
            if (freq[i] > 1)
           {
                   printf (" %c is repeating", i + 97);
                   printf (": %d times\n", freq[i]);
            }
      }
      return 0;

   
    



}
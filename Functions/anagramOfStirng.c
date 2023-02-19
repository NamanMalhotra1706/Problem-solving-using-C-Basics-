#include<stdio.h>
#include <stdbool.h>
#include<string.h>
// bool isAnagram(char * s, char * t){   // s-> st1   t->st2

//     int freq[26]={0};
//     int n=strlen(s);

//     if(strlen(s)!=strlen(t))
//     return false;

//     for(int i=0;i<n;i++)
//     {
//         char ch=s[i];
//         int idx=ch-'a';
//         freq[idx]++;
//     }


//     for(int i=0;i<n;i++)
//     {
//         char ch=t[i];
//         int idx=ch-'a';
//         freq[idx]--;
//     }

//     for(int i=0;i<26;i++)
//     {
//         if(freq[i]!=0)
//         return false;
//     }

//     return true;

// }


int main()
{
    char str1[]="silent",str2[]="listen";

    if(isAnagram(str1,str2))
        printf("Given strings are anagrams ");
    else
        printf("Given strings are not anagrams ");
}
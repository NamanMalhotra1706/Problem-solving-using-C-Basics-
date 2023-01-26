#include<stdio.h>

int main(){
    int Ndays;
    scanf("%d",&Ndays);

    int Year = Ndays/365;
    int Week = (Ndays%365)/7;
    int Days = (Ndays%365)%7;

    printf("%d Days %d Weeks %d Year ",Days,Week,Year);

}
#include <stdio.h>  

    enum days{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  

int main(){

    // printing the values of weekdays

    for(int i=Sunday;i<=Saturday;i++){

        printf("%d, ",i);

    }

    return 0;

}

/* In the above code, we declared an enum named days consisting of the name of the weekdays starting from Sunday.
We then initialized the value of Sunday to be 1. 
This will assign the value for the other days as the previous value plus 1.
To iterate through the enum and print the values of each day, 
we have created a for loop and initialized the value for i as Sunday.*/
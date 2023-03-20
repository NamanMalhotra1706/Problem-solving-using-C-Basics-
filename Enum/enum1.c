//Example of Using Enum in Switch Case Statement

/* In this example, we will create an enum with all the 4 directions,
North, East, West, and South as the constants. 
We will then use the switch case statements to switch between 
the direction elements and print the output based on the value of 
the variable for the enum directions.*/

#include <stdio.h>  
enum directions{North=1, East, West, South};  
int main(){

    enum directions d;

    d=West;

    switch(d){  

        case North:

        printf("We are headed towards North.");

        break;

        case East:

        printf("We are headed towards East.");

        break;

        case West:

        printf("We are headed towards West.");

        break;

        case South:

        printf("We are headed towards South");

        break;

    }

    return 0;

}
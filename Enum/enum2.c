#include<stdio.h>

enum containers{

    cont1 = 5,

    cont2 = 7,

    cont3 = 3,

    cont4 = 8

};

int main(){ 

    // Initializing a variable to hold enums

    enum containers cur_cont = cont2;

printf("Value of cont2 is = %d \n", cur_cont);

cur_cont = cont3;

printf("Value of cont3 is = %d \n", cur_cont);

cur_cont = cont1;

printf("Value of hearts is = %d \n", cur_cont);

return 0;

}

/*We have declared an enum named containers with four different containers as the elements in the above code.
We have then given custom values to the elements and initialized the variable for the enum multiple times 
to print the relevant output.*/
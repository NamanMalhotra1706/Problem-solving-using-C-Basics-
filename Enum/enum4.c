//Example of Using Enum in C for Flags

/* We can use enum in C for flags by keeping 
the values of integral constants a power of 2.
This will allow us to choose and combine two or more flags 
without overlapping with the help of the Bitwise OR (|) operator. 
Let’s consider the example below where we set three flags: 
Crop, Rotate, and Save to work with an image.*/


#include <stdio.h>

enum designFlags{

CROP = 1,
ROTATE = 2,
SAVE = 4

};

int main() {

int myExample = CROP | ROTATE;

printf("%d", myExample);

return 0;

}
/* If we do the calculations for the above code, it is:
   00000010 (ROTATE = 2)
| 00000100 (SAVE = 4)
 ___________
   00000110 (Output = 6)
As you can see, our calculation and the output given by the program are the same.
This concludes that we can use enum in C for flags. 
Also, we can add our custom flags.*/
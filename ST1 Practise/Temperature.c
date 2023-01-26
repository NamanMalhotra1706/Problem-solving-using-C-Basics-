// Q.2 read temperature in centigrade and display a suitable message (Details will be 
// provided to you)

#include <stdio.h>
void main()
{
 int temperature;
 scanf("%d",&temperature);
 if(temperature<0)
 {
 printf("Freezing.");
 }
 else if(temperature<10)
 {
 printf("Very Cold");
 }
 else if(temperature<20)
 {
 printf("Cold");
 }
 else if(temperature<30)
 {
 printf("Normal");
 }
 else if(temperature<40)
 {
 printf("Hot");
 }
 else
 {
 printf("Too Hot");
 }


}
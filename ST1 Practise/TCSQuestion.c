// Q.2. Automobile Company,
// An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A 
// company manager wants to make the production of both types of vehicle according to the given 
// data below:
// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the 
// given data.
// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels
// Constraints :
// 2<=W
// W%2=0
// V<W
// Print “INVALID INPUT” , if inputs did not meet the constraints.


#include<stdio.h>

int main(){
    int totalVehicle , totalWheels;
    int TwoWheller,FourWheller,Vehciles;
    scanf("%d %d",&totalVehicle,&totalWheels);
    if(totalVehicle>totalWheels || totalWheels%2!=0 || 2>=totalWheels){
        printf("Invalid Input \n");
    }
    else{
        Vehciles = totalWheels /2;
        FourWheller = Vehciles - totalVehicle;
        TwoWheller = totalVehicle - FourWheller;
        printf("Two Whellers are :: %d \n",TwoWheller);
        printf("Four Whellers are :: %d \n",FourWheller);
    }
    
    
    
    
}
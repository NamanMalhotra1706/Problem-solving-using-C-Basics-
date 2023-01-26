// Q.1. find the eligibility of admission according to some pr-defined rules.(Rules or 
// conditions will be given to you)
// Marks in Phy >=65
// Marks in Chem >=55
// Marks in Maths >=50
// Total in all three subject >=190 or Total in Maths and Physics >=140

#include<stdio.h>
void main() {
    int Phy , Chem , Maths ;
    scanf("%d",&Phy);
    scanf("%d",&Chem);
    scanf("%d",&Maths);

    int Total = Phy + Chem + Maths ;
    int Mahysics = Maths+Phy;

    if(Phy>=65 && Chem>=55 && Maths>=50 && (Total>=190 || Mahysics >=140)){
        printf("Eligible\n");

    }
    else{
        printf("Not Eligible");
    }
}
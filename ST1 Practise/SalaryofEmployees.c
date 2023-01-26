// Aman got a job in a company as a programmer. He was assigned to the IT cell. The first task given to
// him was to automate the salary of the employees. The company has three slabs of the employees
// according to the basic salary of the employees. Aman first designed the following table before
// writing the code:

// Basic HRA DA PF
// <=100000 20% 90% 15%
// >100000<=500000 25% 90% 20%
// >500000 30% 90% 25%
// Aman now has to calculate the gross salary and the net salary.
// Gross = Basic + HRA+DA+PF
// Net = Gross-PF
// Help Aman write the code.
// Input Explanation:
// Line 1: enter basic of the employee
// Output Explanation:
// Line 1:Basic
// Line 2:HRA
// Line 3:DA
// Line 4:PF
// Line 5:Gross
// Line 6:Net


#include<stdio.h>
int main(){
 float Basics=0,Hr=0,Da=0,Pf=0,Gross=0,Net=0;
scanf("%f",&Basics);

 if(Basics<=100000){
    Hr =0.20*Basics;
    Da =0.9*Basics;
    Pf =0.15*Basics;
 }
 else if(Basics>100000 && Basics<=500000){
    Hr = 0.25*Basics;
    Da = 0.90*Basics;
    Pf = 0.20*Basics;
 }
 else{
    Hr = 0.30*Basics;
    Da = 0.90*Basics;
    Pf = 0.25*Basics;
 }

    Gross = Basics +Hr+Da+Pf;
    Net = Gross-Pf;

    printf("%.2f \n",Basics);
    printf("%.2f \n",Hr);
    printf("%.2f \n",Da);
    printf("%.2f \n",Pf);
    printf("%.2f \n",Gross);
    printf("%.2f \n",Net);
}
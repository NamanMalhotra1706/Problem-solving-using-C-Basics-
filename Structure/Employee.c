// A Company wants to organize the data of their employees. Help them with a C
// program to accept the details of employee and display them using structure. Details
// consist of Employee ID, Name, Designation, Department, Salary


#include<stdio.h>

struct Employee {
    int Employee_Id;
    char Name[20];
    char Designation[20];
    char Department[20];
    int Salary;
};

int main(){
    
    struct Employee E1={1,"Naman","Software Enginier","Cloud",150000};
    struct Employee E2;

    printf("Enter the 2nd Employee ID : ");
    scanf("%d",&E2.Employee_Id);
    printf("Enter the 2nd Employee Name : ");
    scanf("%s",&E2.Name);

    printf("Enter the %s 's Desigination : ",E2.Name);
    scanf("%s",&E2.Designation);

    printf("Enter the %s 's Department : ",E2.Name);
    scanf("%s",&E2.Department);
    printf("Enter the %s 's salary : ",E2.Name);
    scanf("%d",&E2.Salary);



    printf("1st Employee Name is : %s \n",E1.Name);

    printf("1st Employee Id is : %d \n",E2.Employee_Id);
    printf("2nd Employee Name is : %s \n",E2.Name);
    printf("2nd Employee Desgination is : %s \n",E2.Designation);
    printf("2nd Employee Department is : %s\n",E2.Department);
    printf("2nd Employee Salary is : %d \n",E2.Salary);
}
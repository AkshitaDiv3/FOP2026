#include <stdio.h>

int main(){
  float basic_salary, gross_salary, net_salary, HRA,TA, tax;
printf("enterbasic salary:");
scanf("%F" , &basic_salary);
HRA = basic_salary * 0.10;
TA = basic_salary * 0.05;
gross_salary = basic_salary + HRA + TA;
tax = gross_salary * 0.02;
net_salary = gross_salary - tax;
printf("net salry payable is:" , "%f" , &net_salary);
return 0;
}

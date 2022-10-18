#include<stdio.h>
#include<stdlib.h>
struct Employee_st
{
    short sEmpId;
    char age;
};

int main()
{
    struct Employee_st emp1_ot,emp2_ot;
    emp1_ot.sEmpId=1234;
    emp1_ot.age=18;
    emp2_ot.sEmpId=56789;
    emp2_ot.age=22;
    printf("emp1_ot sEmpID:%d\n",emp1_ot.sEmpId);
    printf("emp1_ot sEmpID:%d\n",emp1_ot.age);
    printf("emp2_ot sEmpID:%d\n",emp2_ot.sEmpId);
    printf("emp2_ot sEmpID:%d\n",emp2_ot.age);
    return 0;
}

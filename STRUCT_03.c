#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    char age;
};
struct Department_st
{
    short dept_id;
    struct Employee_st emp1_ot,emp2_ot,emp3_ot;
};

int main()
{

    struct Department_st dep1_ot,dep2_ot,dep3_ot;
    dep1_ot.dept_id=420;
    dep1_ot.emp1_ot.sEmpId=3333;
    dep1_ot.emp1_ot.age=18;
    dep1_ot.emp2_ot.sEmpId=3334;
    dep1_ot.emp2_ot.age=19;
    dep1_ot.emp3_ot.sEmpId=3335;
    dep1_ot.emp3_ot.age=20;

    dep2_ot.dept_id=840;
    dep2_ot.emp1_ot.sEmpId=3301;
    dep2_ot.emp1_ot.age=17;
    dep2_ot.emp2_ot.sEmpId=3302;
    dep2_ot.emp2_ot.age=25;
    dep2_ot.emp3_ot.sEmpId=3303;
    dep2_ot.emp3_ot.age=22;

    dep3_ot.dept_id=840;
    dep3_ot.emp1_ot.sEmpId=3301;
    dep3_ot.emp1_ot.age=17;
    dep3_ot.emp2_ot.sEmpId=3302;
    dep3_ot.emp2_ot.age=25;
    dep3_ot.emp3_ot.sEmpId=3303;
    dep3_ot.emp3_ot.age=22;



    struct Employee_st emp1_ot;
    emp1_ot.sEmpId=1234;
    emp1_ot.age=18;
    printf("size is %d\n", sizeof(struct Employee_st));
    printf("size is %d\n", sizeof(struct Department_st));
    printf("department id %d\n",dep1_ot.dept_id);
    printf("department 1 employee id %d\n", dep1_ot.emp1_ot.sEmpId);
    printf("department 1 employee age %d\n", dep1_ot.emp1_ot.age);
    printf("department 1 employee id %d\n", dep1_ot.emp2_ot.sEmpId);
    printf("department 1 employee age %d\n", dep1_ot.emp2_ot.age);
    printf("department 1 employee id %d\n", dep1_ot.emp3_ot.sEmpId);
    printf("department 1 employee age %d\n", dep1_ot.emp3_ot.age);

     printf("department 2 employee id %d\n", dep2_ot.emp1_ot.sEmpId);
    printf("department 2 employee age %d\n", dep2_ot.emp1_ot.age);
    printf("department 2 employee id %d\n", dep2_ot.emp2_ot.sEmpId);
    printf("department 2 employee age %d\n", dep2_ot.emp2_ot.age);
    printf("department 2 employee id %d\n", dep3_ot.emp3_ot.sEmpId);
    printf("department 2 employee age %d\n", dep3_ot.emp3_ot.age);




    return 0;
}

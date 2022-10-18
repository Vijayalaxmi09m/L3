#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext;
};
int main()
{
    struct Employee_st emp1_ot,emp2_ot,emp3_ot,emp4_ot,emp5_ot,*pEmp_ot;

    emp1_ot.sEmpId=1;
    emp1_ot.pNext=&emp2_ot;
    emp2_ot.sEmpId=2;
    emp2_ot.pNext=&emp3_ot;
    emp3_ot.sEmpId=3;
    emp3_ot.pNext=&emp4_ot;
    emp4_ot.sEmpId=4;
    emp4_ot.pNext=&emp5_ot;
    emp5_ot.sEmpId=5;
    emp5_ot.pNext=NULL;
    pEmp_ot=&emp1_ot;


    /*printf("emp1 addr=%p Empid %d PnEXT=%p\n",&emp1_ot, emp1_ot.sEmpId,emp1_ot.pNext);
     printf("emp2 addr=%p Empid %d PnEXT=%p\n", &emp2_ot,emp2_ot.sEmpId,emp2_ot.pNext);
        printf("emp3 addr=%p Empid %d PnEXT=%p\n", &emp3_ot,emp3_ot.sEmpId,emp3_ot.pNext);


printf("pEmp_ot 1st time: empid=%d,pNext=%p\n",pEmp_ot->sEmpId, pEmp_ot->pNext);
pEmp_ot = pEmp_ot->pNext;
printf("pEmp_ot 2nd time: empid=%d,pNext=%p\n",pEmp_ot->sEmpId, pEmp_ot->pNext);
pEmp_ot = pEmp_ot->pNext;
printf("pEmp_ot 3rd time: empid=%d,pNext=%p\n",pEmp_ot->sEmpId, pEmp_ot->pNext);*/

while(pEmp_ot!=NULL)

{
    printf("pEmp_ot 1st time: empid=%d,pNext=%p\n",pEmp_ot->sEmpId, pEmp_ot->pNext);
    pEmp_ot = pEmp_ot->pNext;
}

    return 0;
}

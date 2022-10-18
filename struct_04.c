#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
        short sEmpId;
         char cvar1;
         short sEmpId2;



};
struct Department_st
{

    struct Employee_st emp1_ot,emp2_ot;
    long lvar1;
};
union union_ut
{
    //long var1;
    struct Employee_st emp1_ot,emp2_ot;
    long var1;

};

int main()
{
    printf("struct Size is %d!\n", sizeof(struct Employee_st));
    printf("struct Size is %d!\n", sizeof(struct Department_st));
    printf("union Size is %d!\n", sizeof(union union_ut));


    return 0;
}

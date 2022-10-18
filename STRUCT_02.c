#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
         char cvar2;
         char cvar1;
         short sempid;
         long lvar1;
         short empid;


};
int main()
{
    struct Employee_st emp1_ot;
    printf("Size is %d!\n", sizeof(struct Employee_st));

    return 0;
}

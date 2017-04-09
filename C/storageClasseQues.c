#include <stdio.h>
#include <stdlib.h>

extern int a  = 100; //only warning.
extern int b;
int test()
{
    return 10;
}

void staticCantIntializeWithFuncReturn()
{
    //static int a = test(); // Error Static can't initialize with func return
    static int a = 0;
    printf("Value of a is %d\n", a);
}

void externVariableHasDecAndDef()
{
    //extern int var; // undefined reference as no defination
    //extern int b; // undefine reference as no defination
    //extern int b = 0; // Error as inside global.
    //var = 10;
    int b = 1;
    printf("Value of b is %d\n", b);
}

void volatileExp()
{
    const int a = 100;
    const volatile int b = 1000;
    int *p = NULL;
    int *q = NULL;

    p = &a;
    q = &b;

    *p = 10;
    *q = 4;

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
}

void constWithPointerExp()
{
    int l = 10;
    int m = 10;
    int n = 10;
    const int *p; //int const *p (same) [Pointer To Constant : Value can't modified]
    int *const q = &m; //[Constant Pointer to Integer : Point Location Can't Modified]
    int *const *r = &n; //int *const *r (same) [Constant Pointer To Constant : Both Value and Location Can't Modified]
    
    p = &l;

    //*p = 100; // Invalid (Pointer to Const : Value can't change
    //q = &n; //Invalid (Const Pointer : Address can't change
    //*r = 100; //Invalud (const point to const)
    r = &l; // Invalid (const pointer to const)

    printf("Value of *p is %d\n", *p);
    printf("Value of *q is %d\n", *q);
    printf("Value of *r is %d\n", *r);
}

void registerDontHaveAmperandOperation()
{
    register int i = 10;
    int *p = NULL;

    //p = &i; //Error or warning based on compiler as register can't be access as memory.

    printf("Value of *p is %d\n", *p);
}

void registerStaticDontWorkTogether()
{
    //static register int i = 0; //Error register itself a storage class thus can't work.
    register int  i = 0;

    printf("Value of register i is %d\n", i);
}

void typedefEg ()
{
    typedef int *i;
    int j = 10;
    i *a = &j;
    printf("val %d\n", **a);
}

int trickQues()
{
  static int num = 16;
  return num--;
}

int main(unsigned int argc, char *argv[])
{
    int iRet = 0;
    int choice = 0;

    if (argc < 2)
    {
        printf("Invalid number of arguments\n");
        iRet = -1;
        goto ErrorExit;
    }

    choice = atoi(argv[1]);

    switch(choice)
    {
        case 0:
        {
            staticCantIntializeWithFuncReturn();
        }
        break;

        case 1:
        {
            externVariableHasDecAndDef();
        }
        break;

        case 2:
        {
            volatileExp();
        }
        break;

        case 3:
        {
            constWithPointerExp();
        }
        break;

        case 4:
        {
            registerDontHaveAmperandOperation();
        }
        break;

        case 5:
        {
            registerStaticDontWorkTogether();
        }
        break;

        case 6:
        {
            typedefEg();
        }
        break;

        case 7:
        {
            for(trickQues(); trickQues(); trickQues())
                printf("%d\n ", trickQues());
        }
        break;
    }

ErrorExit:
    return iRet;
}

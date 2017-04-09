#include <stdio.h>
#include <stdlib.h>

int global;
int global = 5;
void checkSelfGlobalLocalDecl(void)
{
    int global = global;
    printf("value of global after again declaration is %d\n", global);
}

void varstartsOctal(void)
{
    int x = 032;
    printf("Value Of X is %d\n", x);
}

void localredeclaration(void)
{
    //int mayank;
    int mayank = 1;
    //Error : redeclaration of 'mayank'.
    printf("Value of mayank is %d\n", mayank);
}

int main(unsigned int argc, char *argv[])
{
    int iRet = 0;
    int choice = 0;

    if (argc < 2)
    {
        printf("Invalid Number of arguments\n");
        iRet = -1;
        goto ErrorExit;
    }

    choice = atoi(argv[1]);

    switch(choice)
    {
        case 0:
            {
                checkSelfGlobalLocalDecl();
            }
            break;

        case 1:
            {
                varstartsOctal();
            }
            break;

        case 2:
            {
                localredeclaration();
            }
            break;
    }

ErrorExit:
    return iRet;
}

#include <stdio.h>
#include <stdlib.h>

void onlyconstvarworksInswitch(void)
{
    //int i = 10; // Error Not const var.
    const int i = 10;
    int c = 10;
    switch(c) 
    {
        case 0:  // Works fine
        printf("Value of c = %d", c);
        break;
    /*Some more cases */
                    
    }
}

void integralExpressionInSwitchMustConst(void)
{
    int x = 2;
    //int arr[] = {1,2,3}; //error
    //const int arr[] = {1, 2, 3};
    switch (x)
    {
      //  case arr[0]: printf("Choice 1\n"); 
       // case arr[1]: printf("Choice 2\n");
        //case arr[2]: printf("Choice 3\n");
    }
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
            onlyconstvarworksInswitch();
        }
        break;

        case 1:
        {
            integralExpressionInSwitchMustConst();
        }
        break;

    }

ErrorExit:
    return iRet;
}

#include <stdio.h>
#include <stdlib.h>

#define CHAR_BIT    8

/* Check If Number Is Negative */
void checkIfNumNegative(int number)
{
    int givenNumber = number;
    int sign = 0;

    sign = -(int) ((unsigned int) ((int) givenNumber) >> (sizeof(unsigned int) * CHAR_BIT - 1));

    if (sign == -1)
    {
        printf("Supplied Number Is Negative\n");
    }
    else
    {
        printf("Supplied Number Is Positive\n");
    }

    printf("sign is %d\n", sign);
}

/* Check If Any Number Is Negative From Either Of Two */
void checkIfAnyNumberIsNegative(int num1, int num2)
{
    int givenNumber1 = num1;
    int givenNumber2 = num2;
    int result = 0;
    int dummy = 0;

    dummy = (givenNumber1 ^ givenNumber2);
    result = ((givenNumber1 ^ givenNumber2) < 0);
    
    printf("dummy is %d\n", dummy);

    if (result)
    {
        printf("Either given number is negative\n");
    }
    else
    {
        printf("No given number is negative\n");
    }
}

/* Absolute Value */
void checkAbsValue(int number)
{
    int givenNumber = number;
    int mask = 0;
    int absValue = 0;

    mask = givenNumber >> (sizeof(int) * CHAR_BIT) - 1;

    absValue = (givenNumber + mask) ^ mask;

    printf("Abs Value Of Given Number is %d\n", absValue);
}

/* Power Of Two */
void checkIfPowerOfTwo(int number)
{
    int givenNumber = number;
    int result;

    result = givenNumber & (givenNumber - 1);

    if (!result)
    {
        printf("Provided number is power of 2\n");
    }
    else
    {
        printf("Provided number is not pwer of 2\n");
    }
}

/* Help Menu */
void menu()
{
    printf("--------------------------------------------------------------------------------------\n");
    printf("Select Programs...\n");
    printf("Press 'a' for program 'Check If Integer is negative'\n");
    printf("Press 'b' for program 'Check If Any number is negative in supplied two numbers'\n");
    printf("Press 'c' for program 'Check If Absolute value fo number'\n");
    printf("Press 'd' for program 'Check If Power Of 2'\n");
    printf("Press 'm' for printing menu\n");
    printf("Press 'x' for 'exit'\n");
    printf("--------------------------------------------------------------------------------------\n");
}

int main(unsigned int argc, char *argv[])
{
    printf("main ++++\n");
    int prog_data = -3;
    int prog_data_1  = 4;
    int progID = 0;
    int iRet = 0;
    char choice = 'n';

    menu();
    while(1)
    {
        printf("\n");
        printf("Enter Your Choice..\n");
        scanf("%c", &choice);

        switch(choice)
        {
            case 'a':
            {
                printf("Check Number Is Negative Selected\n");
                printf("Enter Any Number...\n");
                scanf("%d", &prog_data);
                checkIfNumNegative(prog_data);
            }
            break;

            case 'b':
            {
                printf("Check Any Given Number Is Negative Out Of Two\n");
                printf("Enter Any Two Numbers....\n");
                scanf("%d", &prog_data);
                scanf("%d", &prog_data_1);
                checkIfAnyNumberIsNegative(prog_data, prog_data_1);
            }
            break;

            case 'c':
            {
                printf("Check Abs Value Of Number\n");
                printf("Enter Any Number...\n");
                scanf("%d", &prog_data);
                checkAbsValue(prog_data);
            }
            break;

            case 'd':
            {
                printf("Check If Number Is Power Of 2\n");
                printf("Enter Any Number...\n");
                scanf("%d", &prog_data);
                checkIfPowerOfTwo(prog_data);
            }
            break;

            case 'm':
            {
                menu();
            }
            break;

            case 'x':
            {
                printf("Exiting program\n");
                exit(0);
            }
            break;
            
            default:
            {
                printf("Invalid Program ID\n");
                iRet = -1;
            }
            break;
        }
    }

ErrorExit:
    printf("main ---\n");
    return iRet;
}
    

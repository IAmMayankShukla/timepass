#include <stdio.h>
#include <stdlib.h>

void ioQues1(void)
{
    char a[10];
    printf("%d\n", scanf("%s\n", a));
}

void scanSetToImplementGets()
{
    char a[256];
    printf("Enter Any String..");
    scanf("%[^\n]s", a);
    printf("Entered string is %s\n", a);
}

void percentNInPrintf()
{
    char a[125] = "Mayank Shukla";
    int c;
    printf("Mayank %nShukla", &c);
    printf("Value of C is %d\n", c);
}

void printpercent()
{
    printf("%%\n");
}

void trickQues1()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf(5 + "GeeksQuiz\n");
    printf("%c \n", 5["GeeksQuiz"]);
    printf("%c \n", "GeeksQuiz"[5]);
    printf("%.*s\n", n, s);
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
            ioQues1();
        }
        break;

        case 1:
        {
            scanSetToImplementGets();
        }
        break;

        case 2:
        {
            percentNInPrintf();
        }
        break;

        case 3:
        {
            printpercent();
        }
        break;

        case 4:
        {
            trickQues1();
        }
        break;
    }

ErrorExit:
    return iRet;
}

#include <stdio.h>
#include <stdlib.h>

#define mySizeof(x) ((char *)(&x + 1) - (char *)(&x))

void intePromotionq1()
{
    char a = 0xfb;
    unsigned char b = 0xfb;

    printf("Value of a %c\n", a);
    printf("Value of a (int) %d\n", a);

    printf("Value of b %c\n", b);
    printf("Value of b (int) %d\n", b);

    if (a == b)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
}

void floatCompare()
{
    float a = 0.1;
    float b = 0.2;
    float c = 0.4;
    float d = 0.6;
    
    if (a == 0.1)
    {
        printf("Eq 1\n");
    }
    else if(a == 0.1f)
    {
        printf("Else Eq 1\n");
    }
    else
    {
        printf("else 1\n");
    }

    if (b == 0.2)
    {
        printf("Eq 2\n");
    }
    else if(b == 0.2f)
    {
        printf("Else Eq 2\n");
    }
    else
    {
        printf("else 2\n");
    }

    if (c == 0.4)
    {
        printf("Eq 3\n");
    }
    else if(c == 0.4f)
    {
        printf("Else Eq 3\n");
    }
    else
    {
        printf("else 3\n");
    }

    if (d == 0.6)
    {
        printf("Eq 4\n");
    }
    else if(a == 0.6f)
    {
        printf("Else Eq 4\n");
    }
    else
    {
        printf("else 4\n");
    }
}

void compareQues1 ()
{
    unsigned int x = -1; 
    int y = ~0; 

    printf("Value of x %d\n", x);
    printf("Value of y %d\n", y);

    if (x == y) 
        printf("same\n"); 
    else
        printf("not same\n");
}

void octalRepre ()
{
    char a = '\012';
 
    printf("value of %d\n", a);
}

void voidvalue ()
{
    void *vptr;// v;
    //v = 0; //error : void vars can't declare but pointer can
    int vm = 0;
    vptr = &vm;
    //printf("%v", *vptr);
    getchar();
}

int mysizeof (void)
{
    int a;
    int *p;
    char b;
    float c;
    
    printf("Size of a is %d\n", sizeof(a));
    printf("Size of a (own sizeof) is %d\n", mySizeof(a));
    printf("Size of *p is %d\n", sizeof(p));
    printf("Size of a (own sizeof) is %d\n", mySizeof(p));
    printf("Size of b is %d\n", sizeof(b));
    printf("Size of a (own sizeof) is %d\n", mySizeof(b));
    printf("Size of c is %d\n", sizeof(c));
    printf("Size of a (own sizeof) is %d\n", mySizeof(c));
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
            intePromotionq1();
        }
        break;
        
        case 1:
        {
            floatCompare();
        }
        break;

        case 2:
        {
            compareQues1();
        }
        break;

        case 3:
        {
            octalRepre();
        }
        break;

        case 4:
        {
            voidvalue();
        }
        break;

        case 5:
        {
            mysizeof();
        }
        break;
    }

ErrorExit:
    return iRet;
}

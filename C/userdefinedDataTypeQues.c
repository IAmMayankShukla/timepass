#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union test
{
   int x;
   char y;
};

struct employee
{
    int     emp_id;
    int     name_len;
    char    name[0];
};

struct date
{
    // d has value between 1 and 31, so 5 bits
    // are sufficient
    unsigned int d: 5;
 
    // m has value between 1 and 12, so 4 bits
    // are sufficient
    unsigned int m: 4;
 
    unsigned int y;
};

void unionQues1(void)
{
    union test p1;
    p1.x = 65;
 
    // p2 is a pointer to union p1
    union test *p2 = &p1;
 
    // Accessing union members using pointer
    printf("%d %c\n", p2->x, p2->y);
}

void structHackQues (void)
{
    struct employee *e = malloc(sizeof(*e) + sizeof(char) * 128);
    e->emp_id 	= 100;
    e->name_len	= strlen("Geeks For Geeks");
    strncpy(e->name, "Geeks For Geeks", e->name_len);
    printf("e->emp_id is %d\n", e->emp_id);
    printf("e->name_len is %d\n", e->name_len);
    printf("e->name is %s\n", e->name);
}

void bitFieldQues(void)
{
    printf("Size of date is %d bytes\n", sizeof(struct date));
    struct date dt = {31, 12, 2014};
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
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
            unionQues1();
        }
        break;

        case 1:
        {
            structHackQues();
        }

        case 2:
        {
            bitFieldQues();
        }
    }
ErrorExit:
    return iRet;
}

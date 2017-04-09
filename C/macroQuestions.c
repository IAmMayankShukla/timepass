#include <stdio.h>
#import <stdio.h>

#pragma GCC warning "Test"

#define MAX	1000
#define NAX	"test"

#define PRINT(i, limit)	do \
					{ \
						if (i++ < limit)\
						{ \
							printf("Test 1\n"); \
							continue; \
						} \
					}while (1);

#ifdef X == 3
	#define Y 2
#else
	#define Y 5
#endif

#define A 3
#if !A
    #define B 2
#else
    #define B 3
#endif

#define INFO    1
#define ERR 2
#define STD_OUT stdout
#define STD_ERR stderr
 
#define LOG_MESSAGE(prio, stream, msg, ...) do {\
                        char *str;\
                        if (prio == INFO)\
                            str = "INFO";\
                        else if (prio == ERR)\
                            str = "ERR";\
                        fprintf(stream, "[%s] : %s : %d : "msg" \n", \
                                str, __FILE__, __LINE__, ##__VA_ARGS__);\
                    } while (0)

#define CRASH() do { \
      ((void(*)())0)(); \
   } while(0)

#define OFFSET_OF(TYPE, element) ((size_t)&(((TYPE *)0)->element))

#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)

typedef struct PodTag
{
   int     i;
   double  d;
   char    c;
} PodType;

void marcoQ1(void)
{
	int t = 0;
	int m = 3;
	PRINT(t, m); // Work Infinite
	//PRINT(0, 3); //Compile time issue, lvalue issue.
}

void macroQ2(void)
{
	printf("Value of Y %d\n", Y);
}

void macroQ3(void)
{
	printf("Value Of B %d\n", B);
}

void macroQ4(void)
{
	//int MAX = 100;
	printf("Value Of Max %d\n", MAX);
	printf("Size Of Max %d\n", sizeof(MAX));
	printf("Size Of Nax %d\n", sizeof(NAX));
}

void macroQ5(void)
{
    char *s = "Hello";
 
        /* display normal message */
    LOG_MESSAGE(ERR, STD_ERR, "Failed to open file");
 
    /* provide string as argument */
    LOG_MESSAGE(INFO, STD_OUT, "%s Geeks for Geeks", s);
 
    /* provide integer as arguments */
    LOG_MESSAGE(INFO, STD_OUT, "%d + %d = %d", 10, 20, (10 + 20));
}

void macroQ6(void)
{
    CRASH();
}

void macroQ7(void)
{
    printf("offset of c in structure is %d\n", OFFSET_OF(PodType, c) );
}

void macroQ8(void)
{
    const char *home_dir ;
    home_dir = getenv("HOME");
    if (likely(home_dir)) 
        printf("home directory: %s\n", home_dir);
    else
        perror("getenv");
}

int main(unsigned int argc, char *argv[])
{
	int testID = 0;
	int iRet = 0;

	testID = atoi(argv[1]);
	
	switch(testID)
	{
		case 1:
		{
			printf("Macro Question 1 selected\n");
			marcoQ1();
		}
		break;

		case 2:
		{
			printf("Macro Question 2 selected\n");
			macroQ2();
		}
		break;

		case 3:
		{
			printf("Macro Question 3 selected\n");
			macroQ3();
		}
		break;

		case 4:
		{
			printf("Macro Question 4 selected\n");
			macroQ4();
		}
		break;

        case 5:
        {
            printf("Macro Question 5 selected\n");
            macroQ5();
        }
        break;

        case 6:
        {
            printf("Macro Question 6 selected\n");
            macroQ6();
        }
        break;

        case 7:
        {
            printf("Macro Question 7 Selected\n");
            macroQ7();
        }
        break;

        case 8:
        {
            printf("Macro Question 8 selected\n");
            macroQ8();
        }
        break;

		default:
		{
			printf("Nothing is selected\n");
			iRet = -1;
		}
		break;

	}

	return iRet;
}

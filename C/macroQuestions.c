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

		default:
		{
			printf("Nothing is selected\n");
			iRet = -1;
		}
		break;
	}

	return iRet;
}

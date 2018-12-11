/*
#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar (void);

int main (void)
{
	starbar ();

	printf ("%s\n", NAME);
	printf ("%s\n", ADDRESS);
	printf ("%s\n", PLACE);

	starbar ();

	return 0;
}

void starbar (void)
{
	int count;

	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
---------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spcaes;

	show_n_char('*', WIDTH);
	putchar('\n');

	show_n_char(SPACE, (WIDTH -strlen(NAME))/2);
	printf("%s\n", NAME);
	spcaes = (WIDTH - strlen(ADDRESS))/2;
	show_n_char(SPACE, spcaes);
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (WIDTH -strlen(PLACE))/2);
	printf("%s\n", PLACE);

	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}

void show_n_char(char ch, int num)
{
	int count;

	for(count =1; count <= num; count++)
		putchar(ch);
}

----------------------------------------------------------------------

#include <stdio.h>

int imin(int, int);

int main(void)
{
	int evil1, evil2;

	printf ("Enter a pair of integers (q to quit):\n");

	while(scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf ("Enter a pair of integers (q to quit):\n");
	}

	printf("Bye!\n");

	return 0;
}

int imin(int n, int m)
{
	int min;

	min = (n < m)?n:m;

	return min;
}

----------------------------------------------------------------------

#include <stdio.h>

void up_and_down(int);

int main(void)
{
	up_and_down(1);

	return 0;
}

void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);

	if(n < 4)
		up_and_down(n + 1);
	
	printf("LEVEL %d: n location %p\n", n, &n);
}
---------------------------------------------------------------------------------

#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
	int num;

	printf("This program calculates factotials.\n");
	printf("Enter a value in the range 0-12(q to quit):\n");

	while(scanf("%d", &num) == 1)
	{
		if(num < 0)
			printf("No negative numbers, please.\n");
		else if(num > 12)
			printf("Keep input under 13.\n");
		else
		{
			printf("Loop:%d factorial = %ld\n", num, fact(num));
			printf("recursion:%d factorial = %ld\n", num, rfact(num));
		}

		printf("Enter a value in the range 0-12(q to quit):\n");
	}

	printf("Bye!\n");

	return 0;
}

long fact(int n)
{
	long ans;

	for(ans = 1; n > 1; n--)
		ans *= n;
	return ans;
}

long rfact(int n)
{
	long ans;

	if(n > 0)
		ans= n * rfact(n-1);
	else
		ans = 1;

	return ans;
}
------------------------------------------------------------------------------

#include <stdio.h>

int Decimal_to_Binary(unsigned long n); 

int main(void)
{
	int num;

	printf("please enter decimal(q to quit):");
	while(scanf("%d", &num) == 1)
	{

		Decimal_to_Binary(num);
		printf("\n");
		printf("please enter decimal(q to quit):");
	}

	return 0;
}

int Decimal_to_Binary(unsigned long num)
{
	int binary;

	if(num > 0)
	{
		binary = num%2;
		Decimal_to_Binary(num/2);
		printf("%d", binary);
	}
}

-------------------------------------------------------------------------

#include <stdio.h>

void interchange(int *u, int *v);

int main(void)
{
	int x = 5;
	int y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}

void interchange(int *u, int *v)
{
	int temp;
	
	temp = *u;
	*u = *v;
	*v = temp;
}

---------------------------------------------------------------------------

#include <stdio.h>

#define MONTHS 12

int main(void)
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;

	for(index = 0; index < MONTHS; index++)
		printf("Month %2d has %2d days.\n", index+1, days[index]);

	return 0;
}

-------------------------------------------------------------------------

#include <stdio.h>

#define SIZE 4

int main(void)
{
	short dates[SIZE];
	short *pti;
	short index;
	double bills[SIZE];
	double *ptf;

	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	
	for(index = 0; index <SIZE; index++)
		printf("pointers + %d: %10p %10p\n", index, pti+index, ptf+index);

	return 0;
}

---------------------------------------------------------------------------

#include <stdio.h>

#define MONTHS 12

int main(void)
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;

	for(index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index+1, *(days+index));

	return 0;
}
-----------------------------------------------------------------------------

#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
	int *p1, *p2, *p3;

	p1 = p2 = data;
	p3 = moredata;

	printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

	return 0;
}
------------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	int urn[5] = {100, 200, 300, 400, 500};
	int *ptr1, *ptr2, *ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4 = %p, *(ptr1+4) = %d\n", ptr1+4, *(ptr1+4));

	ptr1++;
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr2--;
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	--ptr1;
	++ptr2;
	printf("Pointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %ld\n", ptr2, ptr1, ptr2-ptr1);

	printf("\nsubtracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3-2 = %p\n", ptr3, ptr3-2);

	return 0;
}
-------------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
	int zippo[4][2] = {{2,4},{6,8}, {1,3}, {5,7}};

	printf("zippo = %p, zippo + 1= %p\n", zippo, zippo+1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0]+1);
	printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo+1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);
	printf("**zippo = %d\n", **zippo);
	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(zippo+2)+1) = %d\n", *(*(zippo+2)+1));

	return 0;
}

----------------------------------------------------------------------------

#include <stdio.h>

#define MSG "I an a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array.";
	const char *pt1 = "Something is pointing at me.";

	puts("Here are some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);

	words[8] = 'p';
	puts(words);

	return 0;
}
-------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	printf("%s, %p, %c\n", "we", "are", *"space farers");

	return 0;
}
-------------------------------------------------------------------------
*/

#define MSG "I'm special"

#include <stdio.h>

int main(void)
{
	char ar[] = MSG;
	const char *pt = MSG;

	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("              address ar: %p\n", ar);
	printf("              address pt: %p\n", pt);
	printf("         address of MSG : %p\n", MSG);
	printf("address of \"I'm special\": %p \n", "I'm special");

	return 0;
}


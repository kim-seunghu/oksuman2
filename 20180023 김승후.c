#include <stdio.h>

int rfibo(int);
int sfibo(int);

void main()
{
	int i;
	for (i = 3; i <= 45; i += 2)
	{
		printf("rfibo(%d) = %d", i, rfibo(i));
		printf("\n");
		printf("sfibo(%d) = %d", i, sfibo(i));
		printf("\n\n");
	}
}

int rfibo(int input)
{
	if (input == 0)
		return 0;

	else if (input == 1)
		return 1;

	else
		return(rfibo(input - 1) + rfibo(input - 2));
}

int sfibo(int input)
{
	static int fibo1 = 2;
	static int fibo2 = 3;
	static int fibo3;

	if (input == 3)
		return 2;

	else
	{
		fibo1 += fibo2;
		fibo3 = fibo2;
		fibo2 = fibo1 + fibo3;

		return(fibo1);
	}

}
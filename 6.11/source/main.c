#include <stdlib.h>
#include <stdio.h>
#define SIZE 10


int main(void)
{
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
	int pass;
	size_t i;
	int hold;
	int counter = 1;
	int break_decide=0;

	puts("Data items in original order");
	
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d",a[i]);
	}

	for (pass = 1; pass < SIZE; ++pass)
	{
		for (i = 0; i < SIZE - counter; ++i)
		{
			break_decide = 0;

			if (a[i]>a[i + 1])
			{
				break_decide = 1;
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
		
		if (break_decide == 0)
		{
			break;
		}
		counter++;

	}

	puts("\n\nData items in ascending order");
	for (i = 0; i < SIZE ; ++i)
	{
		printf("%4d", a[i]);
	}

	puts("");
	system("pause");
	return 0;
}

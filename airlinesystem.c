#include<stdio.h>
class(int array[]);
int main()
{
	int a[100] = { 0 };
	printf(" Current seat status in plane (0: EMPTY,1: RESERVED)\n");
	int j = 0;
	for (int i = 0; i < 100; i++)
	{
		j = j + 1;
		printf("%d", a[i]);
		
		if (j != 0 && j % 10 == 0)
		{
			
			puts("");
		}
	}
	class(a);
	

	

}

class(int array[])
{
	printf("\n      Type 1: FIRST CLASS\n");
	printf("      Type 2: ECONOMY CLASS\n");

	for (int j = 0; j < 100; j++)
	{
		printf("\nSelect type of class (1 or 2)\n or select 3 to exits: ");
		int num;
		int seat;
		scanf_s("%d", &num);
		while (num > 2 || num < 1)
		{
			printf(" No such class availabe");
			return 0;
		}


		if (num == 1)
		{
			printf("Select your seat number (1-30): ");

			scanf_s("%d", &seat);

			while (seat > 30 || seat < 1)
			{
				printf("Please select between 1-30: ");
				scanf_s("%d", &seat);


			}

			if (array[seat] == 1)
			{
				puts("SEAT IS RESERVED!!");
			}
			seat = array[seat] = 1;
			int j = 0;
			for (int i = 0; i < 100; i++)
			{
				j = j + 1;
				printf("%d", array[i]);

				if (j != 0 && j % 10 == 0)
				{

					puts("");
				}
			}
		}
		if (num == 2)
		{
			printf("Select your seat number (31-100): ");
			scanf_s("%d", &seat);

			while (seat > 100 || seat < 31)
			{
				printf("Please select between 31-100: ");
				scanf_s("%d", &seat);

			}
			if (array[seat] == 1)
			{
				puts("SEAT IS RESERVED!!");
			}
			seat = array[seat] = 1;
			int j = 0;
			for (int i = 0; i < 100; i++)
			{
				j = j + 1;
				printf("%d", array[i]);

				if (j != 0 && j % 10 == 0)
				{

					puts("");
				}
			}

		}
	}
}



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




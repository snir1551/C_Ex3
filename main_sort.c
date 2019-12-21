#include "sortAndIncome.h"


int main()
{

	arr[SIZE_OF_ARRAY];
	for(int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		int x = 0;
		scanf("%d",&x);
		*(arr+i) = x;		
	}

	
	insertion_sort(arr,SIZE_OF_ARRAY);

	for(int i = 0; i < SIZE_OF_ARRAY-1; i++)
	{
		printf("%d,",*(arr+i));
	}
	printf("%d\n",*(arr+SIZE_OF_ARRAY-1));	

	return 0;
}

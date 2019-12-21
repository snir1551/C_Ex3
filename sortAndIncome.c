#include "sortAndIncome.h"
/*
main() {
	//int arr[2];
//int* part = arr + 1;
//arr[1] = 360;
//*(arr + 1 ) = 360

//[0]  [0]  [0]  [0]   []  []  []  []
//10   11    12  13    14  15   16  17
}
*/
void shift_element(int *arr,int i)
{
	
	while(i)
	{
		*(arr+i) = *(arr+i-1);//arr[1] = arr[0] , arr[2] = arr[1] 
		i--;
	}
}

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void insertion_sort(int* arr, int len)
{

	int i;
	for(i = 1; i<len; i++)
	{
		int j = i;
		while(j>0 && *(arr + j) < *(arr + j - 1))
		{
			swap(arr + j, arr + j - 1);
			j--;
		}
	}
}

/*
void print(*arr)
{
	insertion_sort(*arr,SIZE_OF_ARRAY);
	for(int i = 0; i<SIZE_OF_ARRAY-1; i++)
	{
		printf("%d,",*(arr+i));
	}
	printf("%d\n",*(arr+i));
}
*/


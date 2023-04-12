#include <iostream>
using namespace std;
int Max(int* arr, int len)
{
	int max{};

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}


int Min(int* arr, int len)
{
	int min{ 9999 };

	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}
int Avg(int* arr, int len)
{
	int avg{};

	for (int i = 0; i < len; i++)
	{
		avg += arr[i];
	}
	avg /= len;

	return avg;
}


int action(int* arr_1, int* arr_2, int len_1, int len_2, int (*func)(int*, int))
{
	cout << func(arr_1, len_1) << endl;
	cout << func(arr_2, len_2) << endl;

	return 0;
}
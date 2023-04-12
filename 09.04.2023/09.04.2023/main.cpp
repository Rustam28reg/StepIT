#include <iostream>
using namespace std;
#include "heder_functions.h"


int main()
{
	setlocale(LC_ALL, "ru");

	int (*func)(int*, int) = nullptr;

	int len1{ 10 }, len2{ 10 }, num{};
	int* arr1 = new int[len1] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* arr2 = new int[len2] {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

	cout << "1. Найти максимальное значание массива \n2. Найти минимальное значение массива \n3. Найти среднее арифмитическое массива" << endl;
	cout << "Сделайте выбор - "; cin >> num;

	
	switch (num)
	{
	case 1:
		func = Max;
		break;
	case 2:
		func = Min;
		break;
	case 3:
		func = Avg;
		break;
	default:
		break;		
	}
	
	action(arr1, arr2, len1, len2, func);
	
	return 0;
}
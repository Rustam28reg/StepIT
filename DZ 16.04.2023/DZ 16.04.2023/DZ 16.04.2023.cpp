#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{

#pragma region Task 1,2
	/*int len{ 30 }, num{};
	char* word_arr = new char[len] {};

	cout << "Enter word - ";
	cin.getline(word_arr, 30);
	cout << "Select number of shifts - "; cin >> num;

	caesar_cipher(word_arr, len, num);	*/
	////reverse_caesar_cipher(word_arr, len, num);
	//cout << word_arr;
#pragma endregion

#pragma region Task 3

	int len1{10};
	int* arr1 = new int[len1] {0, 6, 3, 2, 4, 5, 1, 9, 8, 7};

	//buble_sotr(arr1, len1);
	insertion_sotr(arr1, len1);
	for (size_t i = 0; i < len1; i++)
	{
		cout << arr1[i];
	}
#pragma endregion

	return 0;
}



#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int len_str{ 100 };
	char* str = new char[len_str] {};

	cout << "¬ведите текст - ";
	cin.getline(str, len_str);

	//diff_foo(str, len_str);
	up_foo(str, len_str);
	//check_num(str, len_str);
	//check_letter(str, len_str);
	cout << endl;
	cout << str;
	return 0;
}

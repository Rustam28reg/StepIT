#include <iostream>
using namespace std;

char* diff_foo(char* _str, int& _len_str)
{
	int k{}, h{}, num{}, len_word1{}, len_word2{}, count{}, index{};
	char* _word1 = new char[_len_str] {};
	char* _word2 = new char[_len_str] {};
	cout << "¬ведите слово которе надо заменить - ";
	cin.getline(_word1, _len_str);
	cout << "¬ведите слово на которе надо заменить - ";
	cin.getline(_word2, _len_str);
	//длина второго слова
	while (_word2[k] != '\0')
	{
		len_word2++;
		k++;
	}
	k = 0;
	// —оздание переменной с пробелами с двух сторон 
	while (_word1[k] != '\0')
	{
		len_word1++;
		k++;
	}
	k = 0;
	char* _word1_new = new char[len_word1 + 3] {};
	_word1_new[0] = ' ';
	for (int i = 1; i < len_word1 + 1; i++)
	{
		_word1_new[i] = _word1[k];
		k++;
	}
	_word1_new[len_word1 + 1] = ' ';
	k = 0;
	// ÷икл дл€ возможности мен€ть слова в случае замены более одного слова
	for (int j = 0; j < 10; j++)
	{
		if (index != 0)
		{
			num = index;
		}
		// ѕроверка наличи€ слова в тексте и его индекс
		for (int i = num; i < _len_str; i++) 
		{
			if (_str[i] != _word1_new[k])
			{
				count = 0;
				k = 0;
			}
			else
			{
				count++;
				k++;
			}
			if (count == len_word1 + 2)
			{
				index = i;
				break;
			}
			if (i == _len_str - 1)
			{
				return &*_str;
			}
		}
		k = 0;
		//создаем массив куда добавим текст конца замен€ймого слова
		char* str_end = new char[_len_str] {};
		for (int i = index; i < _len_str; i++)
		{
			str_end[k] = _str[i];
			k++;
		}
		k = 0;
		//добавл€ем новое слово
		for (int i = index - len_word1; i < _len_str; i++)
		{
			_str[i] = _word2[k];
			k++;
		}
		k = 0;
		//добавл€ем концовку
		h = (index - len_word1) + len_word2;
		for (int i = h; i < _len_str; i++)
		{
			_str[i] = str_end[k];
			k++;
		}
	}

}

void up_foo(char* _str, int& _len_str)
{
	if (_str[0] > 96 && _str[0] < 123)
	{
		_str[0] -= 32;
	}
	for (int i = 0; i < _len_str; i++)
	{
		if (_str[i] == '.' || _str[i] == '?' || _str[i] == '!' && _str[i + 2] < _len_str)
		{
			_str[i + 2] -= 32;
		}
	}
}

void check_letter(char* _str, int& _len_str)
{
	char num{};
	int count{};
	cout << "¬ведите букву "; cin >> num;

	for (int i = 0; i < _len_str; i++)
	{
		if (_str[i] == num)
		{
			count++;
		}
	}

	cout << count << " - раз встречаетс€ буква " << num << " в тексте.";
}

void check_num(char* _str, int& _len_str)
{
	
	int count{};
	for (int i = 0; i < _len_str; i++)
	{
		if (_str[i] > 47 && _str[i] < 58)
		{
			count++;
		}
	}

	cout << count << " - ÷ифр в тексте";
}


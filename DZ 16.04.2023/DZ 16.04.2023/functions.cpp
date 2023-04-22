void caesar_cipher(char* _word_arr, int _len, int _num)
{

	for (int i = 0; i < _len; i++)
	{
		if (_word_arr[i] > 64 && _word_arr[i] < 91)
		{
			if (_word_arr[i] <= (90 - _num))
			{
				_word_arr[i] += _num;
			}
			else
			{
				_word_arr[i] = _word_arr[i] - (26 - _num);
			}
		}
		if (_word_arr[i] > 96 && _word_arr[i] < 123)
		{
			if (_word_arr[i] <= (122 - _num))
			{
				_word_arr[i] += _num;
			}
			else
			{
				_word_arr[i] = _word_arr[i] - (26 - _num);
			}
		}
	}
	
}

void reverse_caesar_cipher(char* _word_arr, int _len, int _num)
{
	int count{}, k{};
	for (int i = 0; i < _len; i++)
	{
		if (_word_arr[i] > 64 && _word_arr[i] < 91)
		{
			if (_word_arr[i] <= (90 - _num))
			{
				_word_arr[i] += _num;
			}
			else
			{
				_word_arr[i] = _word_arr[i] - (26 - _num);
			}
		}
		if (_word_arr[i] > 96 && _word_arr[i] < 123)
		{
			if (_word_arr[i] <= (122 - _num))
			{
				_word_arr[i] += _num;
			}
			else
			{
				_word_arr[i] = _word_arr[i] - (26 - _num);
			}
		}
	}
	while (_word_arr[k] != '\0')
	{
		count++;
		k++;
	}
	k = count;
	char* _word_arr2 = new char[count] {};

	for (int i = 0; i < count; i++,k--)
	{
		_word_arr2[i] = _word_arr[k-1];
	}
	for (int i = 0; i < count; i++)
	{
		_word_arr[i] = _word_arr2[i];
	}
}

void buble_sotr(int* _arr1, int _len1)
{
	int* arr2 = new int[_len1] {};

	for (int i = 0; i < _len1 - 1; i++)
	{
		if (_arr1[i] > _arr1[i + 1])
		{
			arr2[0] = _arr1[i + 1];
			_arr1[i + 1] = _arr1[i];
			_arr1[i] = arr2[0];
			i = 0;
		}
	}

}

void insertion_sotr(int* _arr, int _len1)
{
	for (int i = 1; i < _len1; i++)
	{
		int k = _arr[i];
		int j = i - 1;
		while (j>=0 && _arr[j] > k)
		{
			_arr[j + 1] = _arr[j];
			j -= 1;
		}
		_arr[j + 1] = k;
	}

}
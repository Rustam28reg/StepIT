#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class MyVector 
{
private:
    T* arr{};
    size_t length{};
    size_t capacity{};
public:
    MyVector(size_t capacity) 
    {
        this->capacity = capacity;
    }

    MyVector(initializer_list<T> list) 
    {
        this->capacity = list.size() * 2;
        this->length = list.size();
        this->arr = new T[this->capacity]{};

        for (auto i = list.begin(); i < list.end(); ++i) 
        {
            this->arr[i - list.begin()] = *i;
        }
    }

    void append(T element) 
    {
        if (this->length == this->capacity) 
        {
            this->capacity *= 2;
            T* new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < this->length; ++i) 
            {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;

        }
        this->arr[this->length] = element;
        this->length++;
    }

	void insert(int index, T element)
	{
        index -= 1;
		if (this->length == this->capacity)
		{
			this->capacity *= 2;
		}

		T* new_arr = new T[this->capacity]{};
		for (size_t i = 0; i < index; ++i)
		{
			new_arr[i] = this->arr[i];
		}

		new_arr[index] = element;

		for (size_t i = index + 1; i < this->length + 1; i++)
		{
			new_arr[i] = this->arr[i - 1];
		}
        this->length++;
		delete[] this->arr;
		this->arr = new_arr;

	}

    void pop_back()
    {
        this->arr[this->length - 1] = 0;
        this->length--;
    }

    size_t getLength() const 
    {
        return this->length;
    }

    friend ostream& operator<<(ostream& os, MyVector<T>& v) 
    {
        for (size_t i = 0; i < v.length; ++i) 
        {
            os << v.arr[i] << ' ';
        }
        return os;
    }

    T& operator[](size_t index) 
    {
        if (index < this->length) 
        {
            return this->arr[index];
        }
    }

    void clear()
    {
        for (size_t i = 0; i < this->length; i++)
        {
            this->arr[i] = 0;
        }
        this->length = 0;
    }
};

int main()
{
    MyVector<int> v1 = { 1, 2, 3, 4, 5 };
    cout << v1 << endl;
    v1.append(3);
    cout << v1 << endl;
    cout << v1.getLength() << endl;
    v1.pop_back();
    cout << v1 << endl;
    v1.insert(2, 7);
    cout << v1 << endl;
    v1.clear();
    cout << v1 << endl;


    return 0;
}

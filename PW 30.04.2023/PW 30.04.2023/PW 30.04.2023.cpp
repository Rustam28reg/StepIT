#include <iostream>
using namespace std;

struct student
{
private:
	uint16_t age{};
public:
	string name{};
	string lastName{};
	string facultet{};
	uint16_t ball{}, kurs{};


	void setAge(uint16_t _age)
	{
		this->age = _age;
	}

};

void createStudent(student _student)
{
	uint16_t _age{};
	cout << "Enter student name - "; cin >> _student.name;
	cout << "Enter student last name - "; cin >> _student.lastName;
	cout << "Enter student facultet - "; cin >> _student.facultet;
	cout << "Enter student rating - "; cin >> _student.ball;
	cout << "Enter student kurs - "; cin >> _student.kurs;
	cout << "Enter student age - "; cin >> _age;
	_student.setAge(_age);

}

struct academy
{
	uint16_t len{};
	uint16_t capacity{ 10 };
	string nameAcademy{};
	string* facultet = new string[5]{};
	student* students = new student[capacity]{};

	void add_student()
	{
		if (this->len == this->capacity)
		{
			this->capacity += this->capacity / 2;
			student* new_students = new student[capacity]{};
			for (size_t i = 0; i < len; i++)
			{
				new_students[i] = this->students[i];
			}
			delete[] this->students;
			student* _students = new_students;
			delete[] new_students;
		}
		createStudent(this->students[this->len]);
		this->len++;
	}

	void delete_student(string last_name)
	{
		for (size_t i = 0; i < this->len; i++)
		{
			if (last_name == this->students[i].lastName)
			{
				student* new_students = new student[capacity]{};

				for (size_t j = 0; j < i; j++)
				{
					new_students[j] = this->students[j];
				}
				for (size_t j = i + 1; j < this->len; j++)
				{
					new_students[j] = this->students[j];
				}
				delete[] this->students;
				for (size_t j = 0; j < len; j++)
				{
					this->students[j] = new_students[j];
				}

			}
		}
	}

	student get_facultet_student(string _facultet)
	{
		const int iter{};
		for (int iter = 0; iter < this->len; iter++)
		{
			if (_facultet == this->students[iter].facultet)
			{
				return students[iter], get_facultet_student(_facultet);
			}
		}
	}

};


int main()
{
	academy* hogwards = new academy{};
	string last_name{}, facultet{};
	hogwards->add_student();

	//cout << "Enter last name - "; cin >> last_name;
	//hogwards->delete_student(last_name);

	//cout << hogwards[0].students[0].lastName << "hi"; // проверка удаленного первого студента 

	cout << "Enter facultet - "; cin >> facultet;


	cout << hogwards->get_facultet_student(facultet).lastName << endl
		<< hogwards->get_facultet_student(facultet).name << endl << endl;




	return 0;
}

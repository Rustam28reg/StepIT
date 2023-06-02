#include <iostream>
using namespace std;

class birthday
{
private:
    uint16_t day{};
    uint16_t month{};
    uint16_t year{};

    birthday() = default;
    birthday(uint16_t day, uint16_t month, uint16_t year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

public:
    void setBirthday()
    {
        cout << "Enter day - "; cin >> this->day;
        cout << "Enter month - "; cin >> this->month;
        cout << "Enter year - "; cin >> this->year;
    }
    uint16_t getDay() 
    {
        return day;        
    }
    uint16_t getMonth() const
    {
        return month;
    }
    uint16_t getYear() const
    {
        return year;
    }
};


class student
{
public:
    string name{};
    string surname{};
    string patronymic{};
    birthday studentBirthday;
    string city{};
    string country{};
    uint16_t phoneNumber{};

    string sñhoolName{};
    string citySchool{};
    string countrySchool{};
    uint16_t groupNumber{};

    student() = default;

};

    void createStudentData(student stud,int _choice)
    {
		cout << "Enter name - "; cin >> stud.name;
		cout << "Enter surname - "; cin >> stud.surname;
		cout << "Enter patronymic - "; cin >> stud.patronymic;
        if (_choice == 1)
        {
			cout << "Enter birthday:" << endl;
            stud.studentBirthday.setBirthday();
        }
		cout << "Enter city - "; cin >> stud.city;
		cout << "Enter country - "; cin >> stud.country;
		cout << "Enter phone number - "; cin >> stud.phoneNumber;
    }

    void createSchoolData(student stud)
    {
		cout << "School name - "; cin >> stud.sñhoolName;
		cout << "School city - "; cin >> stud.citySchool;
		cout << "School country - "; cin >> stud.countrySchool;
		cout << "Group number - "; cin >> stud.groupNumber;
    }

    void printStudentData(student stud, int i) 
    {
        cout << "Name - " << stud.name << endl
            << "Surname - " << stud.surname << endl
            << "Patronymic - " << stud.patronymic << endl
            << "Birthday - " << stud.studentBirthday.getDay() << "." << stud.studentBirthday.getMonth() << "." << stud.studentBirthday.getYear() << endl
            << "City - " << stud.city << endl
            << "Country - " << stud.country << endl
            << "Phone number - " << stud.phoneNumber << endl;
    }

    void printSchoolData(student stud, int i)
    {
		cout << "School name - " << stud.sñhoolName << endl
			<< "School city - " << stud.citySchool << endl
			<< "School country - " << stud.countrySchool << endl
			<< "Group number - " << stud.groupNumber << endl;
	}

	int main()
	{
		int choice{}, choice2{}, k{}, j{}, m{};
        student* stud = new student[20]{};

		cout << "Authorization" << endl
			<< "1. Administrator" << endl
			<< "2. Teacher" << endl
			<< "Enter choice - ";  cin >> choice;


		while (true)
		{
			m = 0;

			cout << "1. Create student" << endl
				<< "2. Create school" << endl
				<< "3. Print student" << endl
				<< "4. Print school" << endl
				<< "Enter choice - "; cin >> choice2;

			switch (choice2)
			{
			case 1:
				createStudentData(stud[k], choice);
				k++;
				break;
			case 2:
				createSchoolData(stud[j]);
				j++;
				break;
			case 3:
				printStudentData(*stud, m);
				break;
			case 4:
				printSchoolData(*stud, m);
				break;
			default:
				break;
			}
		}



		return 0;

	}



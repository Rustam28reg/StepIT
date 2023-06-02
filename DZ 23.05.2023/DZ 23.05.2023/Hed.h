#include <iostream>
using namespace std;

class birthday
{
private:
    uint16_t day{};
    uint16_t month{};
    uint16_t year{};

    birthday() = default;
    birthday(uint16_t day, uint16_t month, uint16_t year);

public:

    void setBirthday();

    uint16_t getDay();

    uint16_t getMonth() const;

    uint16_t getYear() const;

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

};

void createStudentData(student stud, int _choice);


void createSchoolData(student stud);


void printStudentData(student stud, int i);


void printSchoolData(student stud, int i);


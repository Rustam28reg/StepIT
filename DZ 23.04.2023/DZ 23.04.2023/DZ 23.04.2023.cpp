
#include <iostream>
using namespace std;

struct Animal
{
    char* name = new char[30] {};
    char* gender = new char[30] {};
    uint16_t age{};

    void printAnimals()
    {
        cout
            << "Animal name: " << name << endl
            << "Animal gender: " << gender << endl
            << "Animal age: " << age << endl;

    }
};

struct Zoopark
{
    char* name = new char[30] {};
    uint16_t capacity{};
    uint16_t count{};
    Animal* animals{};

    void createAnimal()
    {

        if (count < capacity)
        {
            Animal *animal = new Animal{};

        getchar();

        cout << "Enter animal name: ";
        cin.getline(animal->name, 30);

        cout << "Enter animal gender: ";
        cin.getline(animal->gender, 30);

        cout << "Enter animal age: ";
        cin >> animal->age;

        animals[count] = *animal;
        count++;
        }
        else
        {
            cout << "Zoopark is fool" << endl;
        }

    }
    
    void printInfo()
    {

        cout << "There are " << count << " animals in " << name << " zoopark" << endl;

    }

    void showAll()
    {

        for (int i = 0; i < count; i++) 
        {
            cout << "Animal #" << i + 1 << '\n';
            animals[i].printAnimals();
        }

    }
};
void createZoopark(Zoopark*& zooPark) {

    zooPark = new Zoopark{};

    cout << "Enter zoopark name: ";
    cin.getline(zooPark->name, 30); // Dubai cars

    cout << "Enter zoopark capacity: ";
    cin >> zooPark->capacity; // 100
    getchar();

    zooPark->animals = new Animal[zooPark->capacity]{};
}

int main()
{
    int choice{};

    Zoopark* zoopark{};
    createZoopark(zoopark);


    while (true) {
        cout
            << "Enter choice: " << endl
            << "1. Add animal" << endl
            << "2. Show all animals" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            system("cls");
            zoopark->createAnimal();
            break;
        case 2:
            system("cls");
            zoopark->showAll();
            break;
        default:
            break;
        }
    }
    return 0;
}



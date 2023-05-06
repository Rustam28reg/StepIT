#include <iostream>
using namespace std;

struct book
{
    char* name = new char[30] {};
    char* author = new char[30] {};
    char* publishingHouse = new char[30] {};
    char* genre = new char[30] {};
        
};

void printAllBooks(book* _library, int _len)
{

    for (size_t i = 0; i < _len; i++)
    {
        cout << "Book number : " << (i + 1) << endl;
        cout << "Book name - " << _library[i].name << endl;
        cout << "Author - " << _library[i].author << endl;
        cout << "Publishing house - " << _library[i].publishingHouse << endl;
        cout << "Genre - " << _library[i].genre << endl;
    }

}

void printBooks(book* _library, int i)
{
    cout << "Book number : " << (i + 1) << endl;
    cout << "Book name - " << _library[i].name << endl;
    cout << "Author - " << _library[i].author << endl;
    cout << "Publishing house - " << _library[i].publishingHouse << endl;
    cout << "Genre - " << _library[i].genre << endl;
}

void createBooks(book* _library, int _k)
	{
        getchar();
		cout << "Enter name: ";
		cin.getline(_library[_k].name, 30);
        cout << "Enter author: ";
        cin.getline(_library[_k].author, 30);
        cout << "Enter publishing: ";
        cin.getline(_library[_k].publishingHouse, 30);
        cout << "Enter genre: ";
        cin.getline(_library[_k].genre, 30);

	}

int main()
{
    int choice{}, len{ 10 }, k{}, num{};
    book* library = new book[len]{}; 
    book library1{};
    char* search = new char[30]{};

    while (true) 
    {
        cout
			<< "1. Add book" << endl
			<< "2. Show all books" << endl
			<< "3. Chenge book" << endl
			<< "4. Search for books by author" << endl
			<< "5. Book search by title" << endl
			<< "6. Sorting an array by book title" << endl
			<< "7. Sort array by author" << endl
			<< "8. Sorting the array by publisher" << endl
			<< "Enter choice: ";


        cin >> choice;

        switch (choice) {
        case 1:
            system("cls");
                        
            createBooks(library, k);
            k++;
            
            break;
        case 2:
            system("cls");
            printAllBooks(library, k);
            break;
        case 3:
            system("cls");
            printAllBooks(library, k);
            cout << "Enter book number "; cin >> num;
            system("cls");
            createBooks(library, num-1);
            break;
        case 4:
            getchar();
            system("cls");
            cout << "Enter book author "; 
            cin.getline(search, 30);
            for (size_t i = 0; i < k; i++)
            {

                for (size_t j = 0; search[j] != '\0'; j++)
                {
                    if (library[i].author[j] == search[j])
                    {
                        printBooks(library, i);
                        break;

                    }
                }
            }
            break;
        case 5:
            getchar();
            system("cls");
            cout << "Enter book title ";
            cin.getline(search, 30);
            for (size_t i = 0; i < k; i++)
            {

                for (size_t j = 0; search[j] != '\0'; j++)
                {
                    if (library[i].name[j] == search[j])
                    {
                        printBooks(library, i);
                        break;

                    }
                }
            }
            break;
        case 6:
            system("cls");
			for (size_t i = 0; i < k-1; i++)
			{
				int j{};

				while (library[i].name[j] == library[i + 1].name[j])
				{
					j++;
				}
				if (library[i].name[j] > library[i + 1].name[j])
				{
					library1 = library[i];
					library[i] = library[i + 1];
					library[i + 1] = library1;
                    i = -1;
				}

			}

            break;
        case 7:
            system("cls");
            for (size_t i = 0; i < k - 1; i++)
            {
                int j{};

                while (library[i].author[j] == library[i + 1].author[j])
                {
                    j++;
                }
                if (library[i].author[j] > library[i + 1].author[j])
                {
                    library1 = library[i];
                    library[i] = library[i + 1];
                    library[i + 1] = library1;
                    i = -1;
                }

            }
            break;
        case 8:
            system("cls");
            for (size_t i = 0; i < k - 1; i++)
            {
                int j{};

                while (library[i].publishingHouse[j] == library[i + 1].publishingHouse[j])
                {
                    j++;
                }
                if (library[i].publishingHouse[j] > library[i + 1].publishingHouse[j])
                {
                    library1 = library[i];
                    library[i] = library[i + 1];
                    library[i + 1] = library1;
                    i = -1;
                }

            }

            break;
        default:
            break;
        }
    }
    


    
    return 0;
}

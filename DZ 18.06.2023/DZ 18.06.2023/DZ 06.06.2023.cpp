#include <iostream>
#include <cstring>
using namespace std;


template <typename T>
class MyList
{
public:
    struct Node
    {
        T data{};
        Node* next{};
        Node* previous{};

        Node(T data)
        {
            this->data = data;
        }
    };

    MyList() = default; 

    MyList(initializer_list<T> list)
    {
        for (const T* it = list.begin(); it < list.end(); ++it)
        {
            push_back(*it);
        }
    }


    void push_back(T data)
    {

        Node* node = new Node{ data };

        if (this->head == nullptr)
        {
            this->head = node;
            this->tail = node;
        }

        else
        {
            this->tail->next = node;
            node->previous = tail;
            this->tail = node;
        }
        ++(this->size);
    }

    void push_front(T data)
    {
        Node* node = new Node{ data };
        if (this->head == nullptr)
        {
            this->head = node;
            this->tail = node;
        }
        else
        {
            node->next = head;
            head = node;
        }
        ++(this->size);
    }

    void pop()
    {
        
        tail = tail->previous;
        tail->next = nullptr;

    }
    
    void pop_front()
    {
        head = head->next;
        head->previous = nullptr;
    }

    void getData()
    {
        cout << "Head address: " << this->head << endl;
        cout << "Head address in stack: " << &(this->head) << endl;
        cout << "Tail address: " << this->tail << endl;
        cout << "Size: " << this->size << endl;

        cout << "Head data address: " << &(this->head->data) << endl;
        cout << "Size address: " << &(this->size) << endl;
    }

    void insert(T data, int index)
    {
        Node* node = head;
        Node* pNode = new Node(data);
        Node* hNode{};
        for (size_t i = 0; i < index; i++)
        {
            node = node->next;
            if (i == index-1)
            {
                hNode = node;
            }
        }
        node = head;
        for (size_t i = 0; i < index; i++)
        {
            node = node->next;
            if (i == index - 2)
            {
                node->next = pNode;
                pNode->previous = node;
            }
        }
        pNode->next = hNode;
        hNode->previous = pNode;
        ++(this->size);

    }
	friend ostream& operator<<(ostream& os, const MyList& list)
	{
		Node* current = list.head;
		while (current != nullptr) {
			os << current->data << " ";
			current = current->next;
		}
		return os;
	}

    T& operator[](int index)
    {
        Node* current = head;
        for (size_t i = 0; i <= index; i++)
        {
            if (i == index)
            {
                return current->data;
            }
            current = current->next;
        }        
    }

private:
    Node* head{};
    Node* tail{};
    size_t size{};


};

int main()
{
    MyList<int> a{1,2,3,4,5};

 
    a.getData();
    cout << endl;
    cout << a << endl;
    a.push_front(8);
    cout << a << endl;
    a.pop();
    cout << a << endl;
    a.pop_front();
    cout << a << endl;
    a.insert(9, 2);
    cout << a << endl; 


    return 0;
}

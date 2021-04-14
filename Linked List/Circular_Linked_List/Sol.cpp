#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class CLinkedList
{
public:
    Node *head;

    CLinkedList()
    {
        head = NULL;
    }

    void Insert(int x)
    {
        Node *temp = new Node;
        temp->data = x;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            head->next = head;
        }
        else
        {
            Node *t = head;
            do
            {
                t = t->next;
            } while(t->next != head);

            t->next = temp;
            temp->next = head;
        }
    }

    void display()
    {
        Node *temp = head;

        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;

        } while(temp != head);

        cout << "head" << endl;
    }
};


int main()
{
    CLinkedList l;
    l.Insert(23);
    l.Insert(43);
    l.Insert(12);
    l.Insert(8);
    l.Insert(90);

    l.display();

    return 0;
}

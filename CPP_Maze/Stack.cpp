#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
    head = NULL;
}
Stack::~Stack()
{
    node* p = head;
    while (head != NULL)
    {
        head = head->next;
        delete p;
        p = head;
    }
}

void Stack::push(int xx, int yy, char ddirection)
{
    node* new_node = new node;

    if (new_node != NULL)
    {
        new_node->x = xx;
        new_node->y = yy;
        new_node->direction = ddirection;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
    else
    {
        cout << "Memory allocate fail" << endl;
    }
}

node* Stack::pop(int& xx, int& yy)
{
    if (head != NULL)
    {
        node* p = head;
        head = head->next;
        xx = p->x;
        yy = p->y;
        delete p;
    }
    return head;
}

void Stack::print()
{
    if (head != NULL)
    {
        node* p = head;
        while (p != NULL)
        {
            cout << " " << p->x << " " << p->direction << endl;
            p = p->next;
        }
    }
    else
    {
        cout << "Empty stack, print fail" << endl;
    }
}
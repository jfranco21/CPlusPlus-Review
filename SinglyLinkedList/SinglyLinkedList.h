#include <iostream>
using namespace std;

#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

struct Node{
    int number;
    Node *next = NULL;
};

class SinglyLinkedList
{
public:
    SinglyLinkedList();
    void AddNumber(int number);
    void ShowFirst();
    void ShowLast();
    void ShowAll();
    bool FindNumber(int number);
    void RemoveNumber(int number);
    void RemoveFirst();
    void RemoveAll();
    void RemoveLast();
private:
    Node *head;
    Node *tail;
};

#endif // SINGLYLINKEDLIST_H

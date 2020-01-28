#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
    tail = NULL;
}

void SinglyLinkedList::AddNumber(int number){
    // Note: the new operator request memory to be allocated in the Heap
    // It initializes the memory and returns the address
    Node *new_node = new Node;
    new_node->number = number;
    if(head == NULL && tail == NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        tail->next = new_node;
        tail = new_node;
    }
}

void SinglyLinkedList::ShowAll(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->number << " ";
        temp = temp->next;
    }
    cout << endl;
}

void SinglyLinkedList::ShowFirst(){
    if(head != NULL){
        cout << "The first number in the linked list is: " << head->number << endl;
    }
    else{
        cout << "The linked list is empty" << endl;
    }
}

void SinglyLinkedList::ShowLast(){
    if(tail != NULL){
        cout << "The last number in the linked list is: " << tail->number << endl;
    }
    else{
        cout << "The linked list is empty" << endl;
    }
}

void SinglyLinkedList::RemoveAll(){
    if(head != NULL){
        while(head != NULL){
            Node *temp = head;
            head = temp->next;
            delete temp;
        }
        tail = NULL;
    }
}

void SinglyLinkedList::RemoveFirst(){
    // check to see if the singly linked list is not empty
    if(head != NULL){
        // there is only one node head and tail will have to point to NULL
        if(head->next == NULL){
            Node *temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
        }
        // there is more than one node in the singly linked list
        else{
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
}

void SinglyLinkedList::RemoveLast(){
    if(tail != NULL){
           Node *current = head->next;
           Node *prev = head;
           // case for one node in singly linked list
           if(current == NULL){
               delete prev;
               head = NULL;
               tail = NULL;
           }
           // case for more than one node
           else{
               while(current->next != NULL){
                   prev = current;
                   current = current->next;
               }
               delete current;
               tail = prev;
               prev->next = NULL;
           }
    }
}

bool SinglyLinkedList::FindNumber(int number){
    bool found = false;
    if(head != NULL){
        Node *temp = head;
        while(temp != NULL){
            if(temp->number == number){
                found = true;
                break;
            }
            temp = temp->next;
        }
    }
    return found;
}

void SinglyLinkedList::RemoveNumber(int number){
    if(FindNumber(number) == true){
        Node *current = head->next;
        Node *prev = head;
        // case if the number is the only node
        if(current == NULL && prev->number == number){
            delete prev;
            tail = NULL;
            head = NULL;
        }
        // case if there is more than one node
        else{
            // iterates through the linked list
            while(current != NULL){
                // if current node contains value...
                if(current->number == number){
                    prev->next = current->next;
                    delete current;
                    // updates the tail
                    if(prev->next == NULL){
                        tail = prev;
                    }
                    break;
                }
                // covers the case if the 1st node contains the number
                else if(prev->number == number){
                    head = current;
                    delete prev;
                    break;
                }
                // the prev and current positions are updated
                else{
                    prev = current;
                    current = current->next;
                }
            }
        }
    }
    else{
        cout << "The number " << number << " is not in the linked list" << endl;
    }
}

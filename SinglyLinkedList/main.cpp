
#include "SinglyLinkedList.h"




int main()
{
    SinglyLinkedList ll;
    ll.AddNumber(1);
    ll.AddNumber(2);
    ll.AddNumber(3);
    ll.AddNumber(4);
    ll.AddNumber(5);
    ll.ShowAll();
    ll.RemoveNumber(30);
    ll.ShowAll();
    return 0;
}

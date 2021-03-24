#include <iostream>
void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    iterator it = begin();
    size_t s = (mSize/2) + (mSize%2);

    if (mSize == 1){
        node* first = mHeader->next;
        node* H1 = list1.mHeader;
        H1->prev->next = first;
        first->prev = H1->prev;
        first->next = H1;
        H1->prev = first;

        mHeader->next = mHeader;
        mHeader->prev = mHeader;
        mSize = 0;
        return;
    } else if (mSize == 0) return;

    while (--s) {it++;}
    node* a = it.ptr;
    node* b = it.ptr->next;
    node* first = mHeader->next;
    node* last = mHeader->prev;

    node* H1 = list1.mHeader;
    H1->prev->next = first;
    first->prev = H1->prev;
    a->next = H1;
    H1->prev = a;

    node* H2 = list2.mHeader;
    H2->prev->next = b;
    b->prev = H2->prev;
    last->next = H2;
    H2->prev = last;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}

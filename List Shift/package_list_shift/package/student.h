#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    if (mSize != 0) {
        node* tmp = mHeader->next;
        mHeader->next = tmp->next;
        tmp->next->prev = mHeader;
        node* last = mHeader->prev;
        last->next = tmp;
        tmp->prev = last;
        tmp->next = mHeader;
        mHeader->prev = tmp;
    }
}

#endif

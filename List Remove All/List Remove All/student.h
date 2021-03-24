#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  auto it = end();
  while (--it != end()){
    iterator next = it.ptr->next;
    if (it.ptr->data == value){
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        delete it.ptr;
        mSize--;
        it = next;
    }
  }
}

#endif

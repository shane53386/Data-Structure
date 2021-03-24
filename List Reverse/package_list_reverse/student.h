#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here

  if (mSize == 0 || a == b) return a;
  else{
      CP::list<T> cop;
      for (auto it = a; it != b; it++){
        node* n = new node(*it,cop.mHeader,cop.mHeader->next);
        cop.mHeader->next->prev = n;
        cop.mHeader->next = n;
      }
      node* f = a.ptr->prev;
      node* l = b.ptr;
      node* start = cop.mHeader->next;
      node* last = cop.mHeader->prev;
      f->next = start;
      start->prev = f;
      last->next = l;
      l->prev = last;

      return iterator(f->next);
  }
}

#endif

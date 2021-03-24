#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if (it == end()){
    return result;
  } else {
      node* last1 = it.ptr->prev;
      node* last2 = mHeader->prev;
      last1->next = mHeader;
      mHeader->prev = last1;
      result.mHeader->next = it.ptr;
      it.ptr->prev = result.mHeader;
      last2->next = result.mHeader;
      result.mHeader->prev = last2;
      result.mSize = mSize-pos;
      mSize = pos;
  }
  return result;
}

#endif

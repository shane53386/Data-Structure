#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> tmp;

  for (int i = 0; i < mSize; i++){
    tmp.insert(mData[i]);
  }

  int j = tmp.size();
  T *arr = new T[j]();
  int start = 0;
  for (int i = 0; i < mSize; i++){
    if (tmp.find(mData[i]) != tmp.end()){
        arr[start++] = mData[i];
        tmp.erase(tmp.find(mData[i]));
    }
    if (start == j) break;
  }
  delete [] mData;
  mData = arr;
  mSize = j;
  mCap = j;
}

#endif

#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t newSize = mSize+(last-first);
  T *arr = new T[newSize];
  size_t nowSize = 0;
  for (CP::vector<T>::iterator i = this->begin(); i < position; i++){
    arr[i-this->begin()] = mData[nowSize];
    nowSize++;
  }
  auto it = first;
  while (it != last){
        printf("%d%d",*it,nowSize);
    arr[nowSize++] = *(it++);
  }
  for (CP::vector<T>::iterator i = position; i != this->end(); i++){
    arr[i-this->begin()+last-first] = mData[nowSize-(last-first)];
    nowSize++;
  }
  delete [] mData;
  mData = arr;
  mSize = newSize;
  mCap = newSize;
}

#endif

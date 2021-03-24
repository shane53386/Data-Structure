#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K--){
    mSize--;
    if (mSize == 0) break;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::vector<T> v;
  std::stack<T> op;
  while(K--){
    v.push_back(mData[(mSize--)-1]);
    if (mSize == 0) break;
  }
  //don't forget to return an std::stack
  for (int i = v.size()-1; i >= 0; i--){
    op.push(v[i]);
  }
  return op;
}

#endif
